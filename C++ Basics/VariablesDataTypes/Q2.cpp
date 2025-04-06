// Enter cost of 3 items from the user (using float datatype) - a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as their bill. (Addon: You can also try adding 18% GST tax to the items in the bill as an advanced problem)

#include <iostream>
using namespace std;

int main(){
    float pencil, pen, eraser;

    cout<< "Enter the costs of the items respectively" << endl;
    cout<< "Pencil: ";
    cin>>pencil;
    cout<< "Pen: ";
    cin>>pen;
    cout<< "Eraser: ";
    cin>>eraser;

    float sum = pen + pencil + eraser;
    
    float total = sum + (sum*0.18);
    cout<< "Total price without GST = " << sum <<endl;
    cout<< "Total price with 18% GST = " << total <<endl;
}