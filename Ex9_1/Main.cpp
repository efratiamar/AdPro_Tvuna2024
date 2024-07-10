#include<iostream>
#include<string>
#include<stack>
using namespace std;

//(5 + 3 ) * ((20 /10 ) + (8 - 6 ))   => 5 3 + 20 10 / 8 6 - + *
string infixToPostfix(string infix)
{
	string postfix;
	stack<char> st;
	for (int i = 0; i < infix.length(); i++) {
		char ch = infix[i];
		switch (ch)
		{
		case '/':
		case '*':
		case '(':st.push(ch);
			break;
		case')':
			while (st.top() != '(')
			{
				postfix += st.top();
				st.pop();
			}
			st.pop();
			break;
		case '+':
		case '-':
			while (!st.empty() &&
				(st.top() == '*' ||
					st.top() == '/')) {
				postfix += st.top();
				st.pop();
			}
			st.push(ch);
			break;
		default:
			do
			{
				postfix += ch;
				ch = infix[++i];
			} while (ch >= '0' && ch <= '9');
			i--;
			postfix += ' ';
		}
	}
	while (!st.empty())
	{
		postfix += st.top();
		st.pop();
	}
	return postfix;
}

float calcPostfix(string postfix)
{

	stack<float> s;

	for (int i = 0; i < postfix.length(); i++)
	{
		if (postfix[i] >= '0' && postfix[i] <= '9')
		{
			int num = 0;
			do
			{
				num = num * 10 + (postfix[i] - '0');
			} while (postfix[++i] >= '0' && postfix[i] <= '9');
			s.push(num);
		}
		else
		{
			float right = s.top();
			s.pop();
			float left = s.top();
			s.pop();
			float res1;
			switch (postfix[i])
			{
			case '+':
				res1 = left + right;
				break;

			case '-':
				res1 = left - right;
				break;

			case '*':
				res1 = left * right;
				break;

			case '/':
				res1 = left / right;
				break;
			}
			s.push(res1);
		}


	}

	float res = s.top();
	s.pop();
	return res;
}

//"5 3 + 20 10 / 8 6 - + *"
//float calcPostfix(string postfix)
//{
//	stack<float> s;
//	float right = 0;
//	float left = 0;
//
//	for (int i = 0; i < postfix.length(); i++)
//	{
//		if (postfix[i] >= '0' && postfix[i] <= '9')
//		{
//			float num = 0;
//
//			do
//			{
//				num = num * 10 + (postfix[i] - '0');
//
//			} while (postfix[++i] != ' ');
//			s.push(num);
//
//		}
//		else if (postfix[i] == '+')
//		{
//			 right = s.top();
//			 s.pop();
//			 left = s.top();
//			 s.pop();
//			 s.push(left + right);
//		}
//		else if (postfix[i] == '-')
//		{
//			right = s.top();
//			s.pop();
//			left = s.top();
//			s.pop();
//			s.push(left - right);
//		}
//		else if (postfix[i] == '/')
//		{
//			right = s.top();
//			s.pop();
//			left = s.top();
//			s.pop();
//			s.push(left / right);
//		}
//		else if (postfix[i] == '*')
//		{
//			right = s.top();
//			s.pop();
//			left = s.top();
//			s.pop();
//			s.push(left * right);
//		}
//		else
//		{
//			//do nothing
//		}
//
//	}
//
//	float res = s.top();
//	s.pop();
//	return res;
//
//}
//




//float calcPostfix2(string postfix)
//{
//	stack<float>st;
//	for (int i = 0; i < postfix.length(); i++)
//	{
//		char ch = postfix[i];
//		if (ch >= '0' && ch <= '9')
//		{
//			int num = 0;
//			do
//			{
//				num = num * 10 + (ch - '0');
//				ch = postfix[++i];
//			} while (ch != ' ');
//			st.push(num);
//		}
//		else
//		{
//			float y = st.top();
//			st.pop();
//			float x = st.top();
//			st.pop();
//			float z;
//			switch (ch) {
//			case '/':z = x / y;
//				break;
//			case '*':z = x * y;
//				break;
//			case '+':z = x + y;
//				break;
//			case '-': z = x - y;
//			}
//			st.push(z);
//		}
//	}
//	return st.top();
//}

int main()
{
	string exp;
	cout << "enter an infix expression as a	string" << endl;
	cin >> exp; //(5+3)*((20/10)+(8-6))	

	string postfix = infixToPostfix(exp); //5 3 + 20 10 / 8 6 - +*

	cout << "in postfix form: " << postfix << endl;

	cout << "calculated value: " << calcPostfix(postfix) << endl; //32
	return 0;
}
