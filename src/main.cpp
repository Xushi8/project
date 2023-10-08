#include <hello/hello.h>
#include <hello/a.h>
#include <world/b.h>
#include <fmt/format.h>
#include <fmt/color.h>
#include <fmt/chrono.h>
#include <fmt/core.h>
#include <format>
#include <vector>
#include <cassert>

#include <big_int/big_int.hpp>



#if defined(_MSC_VER)
/* Microsoft C/C++-compatible compiler */
#include <intrin.h>
#elif defined(__GNUC__) && (defined(__x86_64__) || defined(__i386__))
/* GCC-compatible compiler, targeting x86/x86-64 */
#include <x86intrin.h>
#elif defined(__GNUC__) && defined(__ARM_NEON__)
/* GCC-compatible compiler, targeting ARM with NEON */
#include <arm_neon.h>
#elif defined(__GNUC__) && defined(__IWMMXT__)
/* GCC-compatible compiler, targeting ARM with WMMX */
#include <mmintrin.h>
#elif (defined(__GNUC__) || defined(__xlC__)) && (defined(__VEC__) || defined(__ALTIVEC__))
/* XLC or GCC-compatible compiler, targeting PowerPC with VMX/VSX */
#include <altivec.h>
#elif defined(__GNUC__) && defined(__SPE__)
/* GCC-compatible compiler, targeting PowerPC with SPE */
#include <spe.h>
#endif

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::flush;
// extern void print_fmt();

constexpr long long func(int n)
{
    long long ret = 0;
    for (int i = 0; i <= n; i++)
    {
        ret += i;
    }

    return ret;
}

void func1(int* __restrict a, int* __restrict b, int* __restrict c)
{
    *c = *b;
    *c = *a;
}

void func2(int* a)
{
#pragma omp simd
    for (int i = 0; i < 8 * 1024; i += 8)
    {
        a[0 + i] = 1;
        a[1 + i] = 2;
        a[2 + i] = 2;
        a[3 + i] = 2;
        a[4 + i] = 2;
        a[5 + i] = 2;
        a[6 + i] = 2;
        a[7 + i] = 2;
    }
}

void func3(int* __restrict a, int* __restrict b)
{
#pragma omp simd
    for (int i = 0; i < 16 * 1024; i++)
    {
        a[i] = b[i] + 5;
    }
}

void func4(int* a, int n)
{
    n = n / 4 * 4;
#pragma omp simd
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
}

void func5(float a, const float* __restrict x, const float* __restrict y, float* __restrict z, size_t n)
{
#pragma omp simd
    for (size_t i = 0; i < n; i++)
    {
        z[i] = a * x[i] + y[i];
    }
}

size_t func6(const float* x, size_t n, float y)
{
    size_t ret = 0;
#pragma omp simd
    for (size_t i = 0; i < n; i++)
    {
        ret += x[i] > y;
    }
    return ret;
}

void func7(float* x, size_t n)
{
#pragma omp simd
    for (size_t i = 0; i < n; i++)
    {
        x[i] = sinf((float)i);
    }
}

void func8(std::vector<int>& a, const std::vector<int>& b)
{
#pragma omp simd
    for (size_t i = 0; i < a.size(); i++)
    {
        a[i] = b[i] + 10;
    }
}



/**
 * @brief This does what you think it does
 * @param a  A thing of arbitrary type.
 * @param b  Another thing of arbitrary type.
 * @return  The sum of the parameters.
 */
int add(int a, int b)
{
    return a + b;
}

bool is_power_of_two1(int n)
{
    return __builtin_popcount(n) == 1;
}

bool is_power_of_two2(int n)
{
    return (n != 0) && ((n & -n) == n);
}

int main()
{
    srand((unsigned int)time(nullptr));
    // print_world();
    // print_hello();

    // std::string str;
    // for (int i = 0; i < 10000; i++)
    // {
    //     str = fmt::format("{} + {} = {}\n", rand() % 10000, rand() % 10000, rand() % 10000);
    //     std::cout << "str = " << str.c_str();
    //     std::cout << std::format("{} + {} = {}\n", rand() % 10000, rand() % 10000, rand() % 10000);
    // }

    // print_fmt();

    // char tmp[10];
    // cin >> (tmp + 3);
    // cout << tmp << '\n';


    // int a, b;
    // cin >> a >> b;
    // cout << add(a, b) << '\n';


    // std::vector<int> arr = { 430, 234, 34 };
    // int siz = arr.size();
    // cout << siz << '\n';

    // assert(0);

    // cout << "__cplusplus = " << __cplusplus << '\n';

    // cout << sqrt(64) << ' ' << get_sqrt(64) << '\n';

    // cout << get_time() << '\n';


    // big_int a(15), b(25);

    // cout << 5 + a << '\n';

    // test_big_int(a, b);

    // for (int i = 0; i < 100; i++)
    // {
    //     int x = rand();
    //     // cout << x << ' ' << is_power_of_two1(x) << '\n';
    //     cout << x << ' ' << is_power_of_two2(x) << '\n';
    // }


#ifdef __AVX2__
    cout << "AVX2!!!\n";
#endif
    

    cerr << clock() / 1000 << "ms\n";
    return 0;
}
