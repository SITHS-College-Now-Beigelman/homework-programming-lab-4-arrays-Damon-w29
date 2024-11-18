// Damon Wu 
// 11/17/2024
// hw - 4

#include <iostream>
#include <string>
using namespace std;

// exercise 1 

// Function to display all even numbers in an array
void filter(int Array[], int size) {                // declares function named filter, uses an array and a variable named sizze
    cout << "Even numbers: ";
    for (int i = 0; i < size; i++) {                // while the integre is less than the size of the array, increase its value by 1 
        if (Array[i] % 2 == 0) {                    // Check if the number is even
            cout << Array[i] << " ";                // if its even, output it
        }
    }
    cout << "\n";                                   // makes a new line.
}

string dna_to_rna(string dna){                      // declares a function naed dna_to_rna, and uses a string named dna
    cout << "Your conversion is: ";                 // shows conversion, code following it is how its done.
    string rna = "";                                // "" puts whatever character is made into quotes
    for(char type : dna){                           // a variable named "type" reads each character from a string named dna, the colon is used as way for "type" to read each character of dna.
        switch(type){
            case 'A': 
               cout << 'U';                         // if the letter is A, convert it into U 
                break;
            case 'C':
               cout << 'G';                         // if the letter is C, convert it into G
                break;
            case 'G': 
               cout << 'C';                         // if the letter is G, convert it into C
                break;
            case 'T': 
               cout <<'A';                          // if the letter is T, convert it into A
                break;  
            default:                                // if its none of them, skip it. 
                break;
        }
    }
    return rna;         // returns what is made
}

int main() {
    int arr[8];                                     // makes an array with 8 spots

    // Prompts user to input 8 integers and 
    cout << "Enter 8 integers: \n";
    for (int i = 0; i < 8; i++) {                   // for every input, make the next number be assigned to a slot. 
        cin >> arr[i];
    }

    // filter function runs with the provided inputs. 
    filter(arr, 8);                                 // runs filter function with the array, and 8

// exercise 2 
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};         // makes an array called cars with 10 spots and 10 numbers to fill each spot
    int salesp[10];                                         // makes an array called salese people with 10 spots

    int totalc = 0;                                         // variable for total cars
    for(int i = 0; i < 10; i++){                            // calculates the total cars, once one value is added, it goes to the next
        totalc += cars[i];
    }
    int highcars = cars [0];                                // assumes the highest amount of cars is the first one
    int bestsale = 1 ;                                      // assumes bestsales person is the first one.  

    for(int i = 0; i < 10; i++){                            // while the code is running through all the spots
        if(cars[i] > highcars){                             // if the current number of cars is higher than the previous assigned one, make it the newest highest number.
            highcars = cars[i];
            bestsale = i + 1;                               // adds one due to the first spot being the number 0.
        }
    }

    cout << "The total cars sold is:" << totalc << "\n";      // outputs the calculations/code, idk im js tired.
    cout << "The best salesman is salesman number: " << bestsale << " and they sold " << highcars << " cars. \n";

// exercise 3 
string dna;

    cout << "Input a dna sequence to convert it to rna: ";              // asks user to put in a dna sequence
    cin >> dna;                                                         // takes in dna point. 

    string rna = dna_to_rna(dna);                                       // the conversion is being done


/*
    Enter 8 integers: 
    1 2 3 4 5 6 7 8 
    Even numbers: 2 4 6 8 
    The total cars sold is:58
    The best salesman is salesman number: 5 and they sold 14 cars.
    Input a dna sequence to convert it to rna: ACGTTGCA
    Your conversion is: UGCAACGU
*/
return 0;
}