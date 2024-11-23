//Function To Display Elements Which are Divisible by 5
function Divisible(arr, isize) {
    var i = 0;
    console.log("Elements Divisible by 5 are : ");
    for (i = 0; i < isize; i++) {
        if ((arr[i] % 5) == 0) {
            console.log("%d", arr[i]);
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var isize = 6;
    var arr = [85, 66, 3, 80, 93, 88];
    console.log("Jay Ganesh....");
    //Call To Divisible Function
    Divisible(arr, isize);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
