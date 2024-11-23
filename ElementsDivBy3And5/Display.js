/*
    Author : Pakshal Shashikant Jain
    Date : 23/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 3 and 5.
              
              Input :  N : 6
                       Elements : 85 66 3 15 93 88
              
              Output : 15
*/
//Function To Display Elements Divisible By 3 and 5
function Display(arr, isize) {
    var i = 0;
    console.log("Elements Divisible By 3 and 5 are : ");
    for (i = 0; i < isize; i++) {
        if (((arr[i] % 3) == 0) && ((arr[i] % 5) == 0)) {
            process.stdout.write(arr[i] + "\t");
        }
    }
}
//Main function
function main() {
    var isize = 6;
    var arr = [85, 66, 3, 15, 93, 88];
    console.log("Ganapati Bappa Morya....");
    //Call To Display Function
    Display(arr, isize);
}
//Call To Main Function
main();
