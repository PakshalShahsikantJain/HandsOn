/*
    Author : Pakshal Shashikant Jain
    Date : 07/06/2023
    Program :  Accept N numbers from user and return difference between summation
               of even elements and summation of odd elements.
               Input : N : 6
               Elements : 85 66 3 80 93 88
               Output : 53 (234 - 181)
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Calculate Differnce
function Diff(isize, arr) {
    var i = 0;
    var diff = 0;
    var SumEven = 0;
    var SumOdd = 0;
    //Logic To Calcualte Difference 
    for (i = 0; i < isize; i++) {
        if ((arr[i] % 2) == 0) {
            SumEven = SumEven + arr[i];
        }
        else {
            SumOdd = SumOdd + arr[i];
        }
    }
    diff = SumEven - SumOdd;
    return diff;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var isize = 6;
    var arr = [85, 66, 3, 80, 93, 88];
    var iret = 0;
    console.log("Ganapati Bappa Morya....");
    //Call To Diff Function
    iret = Diff(isize, arr);
    //Printing Difference Calculate 
    console.log("Difference Between Summation of EvenNumbers and OddNumber is : %d", iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
