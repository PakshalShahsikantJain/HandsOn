/*
    Author : Pakshal Shashikant Jain
    Date : 03/08/2024
    Program : Write a program which accept matrix and one number from user and return
              frequency of that number.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function to count frequency of entered no
function CountFrequency(arr, irow, icol, ino) {
    var i = 0;
    var j = 0;
    var icnt = 0;
    //Logic to count frequency
    for (i = 0; i < irow; i++) {
        for (j = 0; j < icol; j++) {
            if (arr[i][j] == ino) {
                icnt++;
            }
        }
    }
    return icnt;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var arr;
    var irow = 3;
    var icol = 3;
    var i = 0;
    var j = 0;
    var ino = 12;
    var iret = 0;
    console.log("Jay Ganesh...");
    //Allocating memory to matrix
    arr = new Array(irow);
    for (i = 0; i < irow; i++) {
        arr[i] = new Array(icol);
    }
    //Inserting elements in matrix
    for (i = 0; i < irow; i++) {
        for (j = 0; j < icol; j++) {
            arr[i][j] = (i + j) + 10;
        }
    }
    //Printing elements of matrix
    console.log("Element of matrix are : ");
    for (i = 0; i < irow; i++) {
        for (j = 0; j < icol; j++) {
            process.stdout.write(arr[i][j] + "\t");
        }
        console.log();
    }
    //Call to CountFrequency function
    iret = CountFrequency(arr, irow, icol, ino);
    //Printing count of entered number
    console.log("Frequencny of entered no %d is : %d", ino, iret);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call to main function
main();
