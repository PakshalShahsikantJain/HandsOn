/*
    Author : Pakshal Shashikant Jain
    Date : 27/06/2023
    Program : Accept N numbers from user and return difference between frequency of
              even number and odd numbers.
              Input : N : 7
                      Elements : 85 66 3 80 93 88 90

              Output : 1 (4 -3)

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Difference = /** @class */ (function () {
    //Constructor of Class
    function Difference() {
        this.isize = 0;
        this.arr = [];
    }
    //Behaviour of Class To Take input From User
    Difference.prototype.accept = function () {
        this.isize = 7;
        this.arr = [85, 66, 3, 80, 93, 88, 90];
    };
    //Behaviour of Class To Calculate Difference
    Difference.prototype.Diff = function () {
        var i = 0;
        var icntEven = 0;
        var icntOdd = 0;
        var diff = 0;
        //Logic 
        for (i = 0; i < this.isize; i++) {
            if ((this.arr[i] % 2) == 0) {
                icntEven = icntEven + 1;
            }
            else {
                icntOdd = icntOdd + 1;
            }
        }
        diff = icntEven - icntOdd;
        return diff;
    };
    return Difference;
}());
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of Difference Class
    var dobj = new Difference();
    //Call To Behaviours of Class
    dobj.accept();
    iret = dobj.Diff();
    //Printing Differnce Calculated
    console.log("Difference Between Frequency of Even and Odd Number is : ", iret);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
