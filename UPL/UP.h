#include <string>

using namespace std;

std::string UPContents = R"(
////////////////////////////////////////////////////////////////////////////////
//  BUILTIN 
////////////////////////////////////////////////////////////////////////////////

// Default variables, can be overwritten
// if re-initialized or changed
float PI = 3.14159265358979323846264338
float EulersNumber = 2.71828183

// This variable tells the interpreter if it should close the console window when the program has finished running.
bool EXIT_WHEN_DONE = true

// Trigonometric function Sin
func Sin(input)
{
	float out = UP.Math.Sin(input)
	return out
}

// Trigonometric function Cos
func Cos(input)
{
	float out = UP.Math.Cos(input)
	return out
}

// Trigonometric function Tan
func Tan(input)
{
	float out = UP.Math.Tan(input)
	return out
}

// Sigmoid activation function
func Sigmoid(input)
{
	float out = 1 / (1 + EulersNumber ^ -input)
	return out
}

// Hyperbolic tangent activation function
func Tanh(input)
{
	float out = ((EulersNumber ^ input) - (EulersNumber ^ -input)) / ((EulersNumber ^ input) + (EulersNumber ^ -input))
	return out
}

// Rounds input to nearest integer value
func Round(input)
{
	float out = UP.Math.Round(input)
	return out
}

// Linearly interpolates between a and b by t
func Lerp(a, b, t)
{
	float out = UP.Math.Lerp(a, b, t)
	return out
}

// Get absolute value of x
func Abs(x)
{
	float out = UP.Math.Abs(x)
	return out
}

// Convert radians to degrees
func RadToDeg(x)
{
	float out = (x * PI) / 180
	return out
}

// Convert degrees to radians
func DegToRad(x)
{
	float out = (x * 180) / PI
	return out
}

// Clamps input between min and max
func Clamp(input, min, max)
{
	if input < min
	{
		return min
	}
	if input > max
	{
		return max
	}
	return input
}

// Sets color of pixel to RGB value
func SetPixel(x, y, r, g, b)
{
	string out = UP.Graphics.SetPixel(x, y, r, g, b)
	return out
}

// Prints input value to console
func Print(strToPrint)
{
	UP.System.Print(strToPrint)
}

func print(strToPrint)
{
	UP.System.Print(strToPrint)
}

// Prints input value to console with appended newline '\n'
func Printl(strToPrint)
{
	UP.System.PrintLine(strToPrint)
}


// Creates new sprite class
func NSprite(path, x, y, r)
{
	Sprite s = UP.Graphics.Sprite(path, x, y, r)
	return s
}

// Draws sprite to window
func Draw(spr)
{
	UP.Graphics.Draw(spr)
}

// Creates new Vector2 class
func NVec2(x, y)
{
	Vec2 v = UP.System.Vec2(x, y)
	return v
}

// Gets if key is down
func GetKey(keyName)
{
	bool b = UP.Input.GetKey(keyName)
	return b
}

////////////////////////////
// ↓ MADE BY KAPUTCHINO ↓ //
////////////////////////////

// Return the number of combinations
func Comb(n, r)
{
    return Perm(n, r) / Fac(r)
}

// Return the factorial of a number
func Fac(x)
{
    int r = 1
    while x > 1
    {
        r = r * x
        x = x - 1
    }
    return r
}

// Return exp(x) by using the taylor method, not extremly accurate
func TaylorExp(x)
{
    float sum = 0
    float term = 1
    int i = 1
    float sumterm = 1
    while sum != sumterm
    {
        sum = sumterm
        term = term * x / i
        i = i + 1
        sumterm = sumterm + term
    }
    return sum
}

// Return the number of permutations
func Perm(n, r)
{
    if n < 0 
    {
        UP.System.PrintLine("n must be superior or equal to 0")
        return -1
    }
    if r < 0
    {
        UP.System.PrintLine("r must be superior or equal to 0")
        return -1
    }
    if r > n
    {
        UP.System.PrintLine("r must be inferior or equal to n")
        return -1
    }
    return Fac(n) / Fac(n - r)
}

//////////////////////////////////////////
// ↓ MADE BY CONCHETUMARE_PRODUCTIONS ↓ //
//////////////////////////////////////////
func GetPercent(value, percent)
{
	float temp = value * percent / 100
	return temp
}
//gets 100% of number
func PercentToHundred(value, percent)
{
	float temp = value * 100 / percent
	return temp
}
)"
;
