#include "pch.h"
#include "CppUnitTest.h"
#include "..//Sort/sort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT1
{
	TEST_CLASS(UT1)
	{
	public:
		
		TEST_METHOD(TestBubbleSort1)
		{
			const int Size = 10;
			int Arr[Size] = { 2, 8, 5, 1, 20, 6, 4, 15, 9, 7 };
			Assert::AreEqual(Arr[4], 20);
			
			BublleSort(Arr, Size);
			Assert::AreEqual(Arr[7], 9);
			
			ReverseSortArray(Arr, Size);
			Assert::AreEqual(Arr[9], 1);
		}


		TEST_METHOD(TestQuickSort) {
			const int Size = 10;
			int Arr[Size] = { 2, 8, 5, 1, 20, 6, 4, 15, 9, 7 };
			Assert::AreEqual(Arr[4], 20);

			QuickSort(Arr, 0, Size - 1);
			Assert::AreEqual(Arr[7], 9);

			ReverseSortArray(Arr, Size);
			Assert::AreEqual(Arr[9], 1);
		}

		TEST_METHOD(TestShellSort) {
			const int Size = 10;
			int Arr[Size] = { 2, 8, 5, 1, 20, 6, 4, 15, 9, 7 };
			Assert::AreEqual(Arr[4], 20);

			ShellSort(Arr, Size);
			Assert::AreEqual(Arr[7], 9);

			ReverseSortArray(Arr, Size);
			Assert::AreEqual(Arr[9], 1);
		}

		TEST_METHOD(TestRadixSort) {
			const int Size = 10;
			int Arr[Size] = { 2, 8, 5, 1, 20, 6, 4, 15, 9, 7 };
			Assert::AreEqual(Arr[4], 20);

			RadixSort(Arr, Size);
			Assert::AreEqual(Arr[7], 9);

			ReverseSortArray(Arr, Size);
			Assert::AreEqual(Arr[9], 1);
		}
	};
}
