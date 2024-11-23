/*
    Author : Pakshal Shashikant Jain
    Date : 12/06/2023

    Program : Accept N numbers from user and display all such elements which are even and divisible by 5.
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 80
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Display Elements Which are Even and Divisible By 5
function Display(arr, isize) {
    var i = 0;
    //Logic To Print 
    console.log("Printing Elements Which are Even And Divisible By 5");
    for (i = 0; i < isize; i++) {
        if (((arr[i] % 2) == 0) && ((arr[i] % 5) == 0)) {
            process.stdout.write(arr[i] + "\t");
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var isize = 7;
    var arr = [85, 66, 3, 80, 93, 88, 90];
    console.log("Jay Ganesh......");
    //Call To Display Function
    Display(arr, isize);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
