/*
    Author : Pakshal Shashikant Jain
    Date : 24/06/2023
    Program : Accept N numbers from user and display all such elements which are
              multiples of 11.

              Input : N : 6
                      Elements : 85 66 3 55 93 88
                
              Output : 66 55 88
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Display Elements Which are Multiples of 11
function Display(arr, isize) {
    var i = 0;
    console.log("Elements Which are Multiples of 11 are : ");
    for (i = 0; i < isize; i++) {
        if ((arr[i] % 11) == 0) {
            process.stdout.write(arr[i] + "\t");
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var isize = 6;
    var arr = [85, 3, 66, 55, 93, 88];
    console.log("Jay Ganesh.....");
    //Call To Display Function
    Display(arr, isize);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();
