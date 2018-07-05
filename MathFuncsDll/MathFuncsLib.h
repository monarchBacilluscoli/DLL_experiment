// MathFuncsDll.h

// 如果定义了MATHFUNCSDLL_EXPORTS符号，则之后文中的MATHFUNCSDLL_API将会被换为__declspec(dllexport)，也就是将被这个修饰符修饰。
// 而这个修饰符将启用DLL要导出的函数，以便它可供其他函数使用
#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport)
#else
#define MATHFUNCSDLL_API __declspec(dllimport)
#endif

namespace MyMathFuncs {
	// This class is exported from the MathFuncsDll.dll
	class MyMathFuncs {
	public:
		// a+b
		static MATHFUNCSDLL_API double add(double a, double b);

		// a-b
		static MATHFUNCSDLL_API double subtract(double a, double b);

		// a*b
		static MATHFUNCSDLL_API double multiply(double a, double b);

		// a/b
		// Throws const std::invalid_arguement& if b is 0
		static MATHFUNCSDLL_API double divide(double a, double b);
	};
}