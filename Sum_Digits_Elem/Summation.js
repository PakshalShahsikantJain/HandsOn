/*
    Author : Pakshal Shashikant Jain
    Date : 18/07/2021
    Program : Accept N numbers from user and display summation of digits of each number.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 17 17 3 13 17 21
*/
///////////////////////////////////////////////////////////////////////////////////////////////
//Function To Find Summation
function Summation(isize, arr) {
    var i = 0;
    var digits = 0;
    var sum = 0;
    var No = 0;
    console.log("Summation of Digits of each Entered Number is : ");
    for (i = 0; i < isize; i++) {
        No = arr[i];
        while (No != 0) {
            digits = No % 10;
            sum = sum + digits;
            No = Math.floor(No / 10);
        }
        process.stdout.write(sum + "\t");
        sum = 0;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var isize = 6;
    var arr = [8225, 665, 3, 76, 953, 858];
    console.log("Jay Ganesh....");
    //Call To Summatio function
    Summation(isize, arr);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To main function
main();
