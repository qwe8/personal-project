#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\WordCount\pch.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
QWE_wordCount *A = new  QWE_wordCount();
namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			A->init();
			A->MYscanf("0.in");
			A->eft_char = A->CountChar("0.in");
			Assert::AreEqual(A->eft_char, (int)106);
			// �����ַ��Ƿ�ͳ����ȷ
		}
		TEST_METHOD(Testline)
		{
			A->init();
			A->MYscanf("1.in");
			Assert::AreEqual(A->eft_num,(int) 13);
			//ͳ������
		}
		TEST_METHOD(Testword)
		{

			A->init();
			A->MYscanf("2.in");
			A->eft_word = A->CountWord();
			Assert::AreEqual(A->eft_word,(int) 3);
			// ����ͳ�Ƶ������Ƿ���ȷ
		}
		TEST_METHOD(Testmxword1)
		{
			A->init();
			A->MYscanf("3.in");
			A->eft_word = A->CountWord();
			A->CountMxWord();
			A->it = A->qur.begin();
			Assert::AreEqual(-A->it->first, (int)2);
			Assert::AreEqual(A->it->second,(string) "qweee");
			// ���Ե�һ������Ƶ����
		}
		TEST_METHOD(Testmxword2)
		{
			A->init();
			A->MYscanf("4.in");
			A->eft_word = A->CountWord();
			A->CountMxWord();
			A->it = A->qur.begin();A->it++;
			Assert::AreEqual(-A->it->first, (int)1);
			Assert::AreEqual(A->it->second, (string) "asdf456");
			// ���Եڶ�������Ƶ����
		}
		TEST_METHOD(Testmxword3)
		{
			A->init();
			A->MYscanf("5.in");
			A->eft_word = A->CountWord();
			A->CountMxWord();
			A->it = A->qur.begin();
			Assert::AreEqual(-A->it->first, (int)4);
			Assert::AreEqual(A->it->second, (string) "asdf1");
			// ���Դ�Ƶ��ͬʱ�ܷ�����ֵ��������Ǹ�
		}
		TEST_METHOD(Test4)
		{
			A->init();
			A->MYscanf("6.in");
			A->eft_char = A->CountChar("6.in");
			Assert::AreEqual(A->eft_char, (int)0);
			A->eft_word = A->CountWord();
			Assert::AreEqual(A->eft_word, (int)0);
			// �ļ������ڡ�
		}
		TEST_METHOD(Test5)
		{
			A->init();
			A->MYscanf("7.in");
			A->eft_char = A->CountChar("7.in");
			Assert::AreEqual(A->eft_char, (int)894787);
			A->eft_word = A->CountWord();
			Assert::AreEqual(A->eft_word, (int)99814);
			// ������ļ�����Ҫ������ʱ��
		}
		TEST_METHOD(Test6)
		{
			A->init();
			A->MYscanf("8.in");
			A->eft_word = A->CountWord();
			Assert::AreEqual(A->eft_word, (int)0);
			// �����Ƿ��ܱ����󵥴�
		}
		TEST_METHOD(Testmxword4)
		{
			A->init();
			A->MYscanf("9.in");
			A->eft_word = A->CountWord();
			A->CountMxWord();
			A->it = A->qur.end();A->it--;
			Assert::AreEqual(-A->it->first, (int)2);
			Assert::AreEqual(A->it->second, (string) "jieorl");
			// �������һ���������
		}
		TEST_METHOD(Testmxword5)
		{
			A->init();
			A->MYscanf("11.in");
			A->eft_char = A->CountChar("11.in");
			Assert::AreEqual(A->eft_char, (int)1000000);
			A->eft_word = A->CountWord();
			Assert::AreEqual(A->eft_word, (int)200000);
			A->CountMxWord();
			A->it = A->qur.begin();
			Assert::AreEqual(-A->it->first, (int)2);
			Assert::AreEqual(A->it->second, (string) "aaaa");
			// ����һ������ַ�����ʮ������ʣ�������ʮ���ֲ�ͬ���ʣ����ڲ�������
		}
	};
}


