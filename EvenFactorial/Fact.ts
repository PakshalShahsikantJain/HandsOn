/*
    Author : Pakshal Jain
    Date : 17/12/2022
    Program : To Calculate Even Factorial of Entered number 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Factorial of Number
function EvenFact(No : number) : number {
    var i : number = 0;
    var fact : number = 1;
    
    //Handeling Condition if Entered Number is Negative
    if(No < 0) {
        No = -No;
    }

    //Logic
    for( i = No;i > 0;i--) {
        if(i % 2 == 0) {
            fact = fact * i;
        }
    }

    return fact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() {
    var No : number = -5;
    var iret : number = 0;

    console.log("Jay ganesh...");

    //Call To EvenFact Function
    iret = EvenFact(No);

    //Printing Obtained Output 
    console.log("Even Fatorial of Entered Number is :",iret);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();