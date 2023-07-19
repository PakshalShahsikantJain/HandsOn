/*
    Author : Pakshal Shashikant Jain
    Date : 16/07/2023
    Program : Accept N numbers from user and return the difference between largest
              and smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 90 (93 -3)
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Call Difference Function
function Difference(isize, arr) {
    var i = 0;
    var imax = 0;
    var imin = 0;
    var diff = 0;
    //Logic
    imax = arr[0];
    imin = arr[0];
    for (i = 0; i < isize; i++) {
        if (arr[i] > imax) {
            imax = arr[i];
        }
        else if (arr[i] < imin) {
            imin = arr[i];
        }
    }
    diff = imax - imin;
    return diff;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var iret = 0;
    var isize = 6;
    var arr = [85, 66, 3, 66, 93, 88];
    console.log("Jay Ganesh.....");
    //Call To Difference Function
    iret = Difference(isize, arr);
    //Printing Difference Calculated
    console.log("Difference Between Max and Minimum Element is :", iret);
}
//Call To Main function
main();
