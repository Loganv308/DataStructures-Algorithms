#include <iostream> 
#include <string> 
#include <stdexcept>

using namespace std;

int main() 
{ 
    int dividend, divisor = 1, quotient; 
    
    string inpStr = "The input stream is in the fail state."; 

    try 
    { 
        cout << " 10: Enter the dividend: ";
        cin >> dividend; 
        cout << endl; 

        cout << " 13: Enter the divisor: "; 
        cin >> divisor; 
        cout << endl; 

        if (dividend == 0 || divisor == 0)
            throw runtime_error("Math error: Attempted to divide by Zero\n");
        else if (divisor < 0) 
            throw string("Negative divisor."); 
        else if (!cin) 
            throw logic_error("Invalid Input");

        quotient = dividend / divisor; 
        
        cout << " 23: Quotient = " << quotient
        << endl; 
    } 
    catch (int x) 
    { 
        cout << " 27: Division by " << x
        << endl;
    } 
    catch (string s) 
    { 
        cout << " 31: " << s << endl; 
    } 
    catch(runtime_error& e)
    {
        cout << "Exception occurred, Invalid Input!" << endl;
    }
    return 0; 
}