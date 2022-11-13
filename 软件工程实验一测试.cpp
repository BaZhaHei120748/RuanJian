#include "stdafx.h"
#include <iostream>
#include"../软件工程基础1/软件工程基础1/test.h"
using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace 软件工程1测试
{
	[TestClass]
	public ref class 软件工程实验一测试
	{
	private:
		TestContext^ testContextInstance;

	public: 
		/// <summary>
		///获取或设置测试上下文，该上下文提供
		///有关当前测试运行及其功能的信息。
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

		#pragma region Additional test attributes
		//
		//编写测试时，可以使用以下附加特性:
		//
		//在运行类中的第一个测试之前，使用 ClassInitialize 来运行代码
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//在类中的所有测试都已运行之后，使用 ClassCleanup 来运行代码
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		//
		//在运行每个测试之前，使用 TestInitialize 来运行代码
		//[TestInitialize()]
		//void MyTestInitialize() {};
		//
		//在每个测试运行完之后，使用 TestCleanup 来运行代码
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
		#pragma endregion 

		[TestMethod]
		void TestMethod1()
		{
			int maxSum = 0;
			int nowSum = 0;
			int n = 6;
			int num[6] = { -2,11,-4,13,-5,-2 };
			int result = 20;
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				Assert::AreEqual(result, now(maxSum, &nowSum, n, num[i]));;
			}
			//
			// TODO: 在此处添加测试逻辑
			//
		};
		void TestMethod2(){
			int maxSum = 0;
			int nowSum = 0;
			int n = 6;
			int num[6] = { -3,-2,7,-15,1,2};
			int result = 20;
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				Assert::AreEqual(result, now(maxSum, &nowSum, n, num[i]));;
			}
			//
			// TODO: 在此处添加测试逻辑
			//
		};
		void TestMethod2(){
			int maxSum = 0;
			int nowSum = 0;
			int n = 7;
			int num[7] = { -5,-3,-7,-10,-6,-8,-2};
			int result = 20;
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				Assert::AreEqual(result, now(maxSum, &nowSum, n, num[i]));;
			}
			//
			// TODO: 在此处添加测试逻辑
			//
		};
	};
}
