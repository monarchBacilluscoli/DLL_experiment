// MathFuncsDll.h

// ���������MATHFUNCSDLL_EXPORTS���ţ���֮�����е�MATHFUNCSDLL_API���ᱻ��Ϊ__declspec(dllexport)��Ҳ���ǽ���������η����Ρ�
// ��������η�������DLLҪ�����ĺ������Ա����ɹ���������ʹ��
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