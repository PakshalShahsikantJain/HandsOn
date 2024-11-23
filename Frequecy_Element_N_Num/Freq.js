/*
    Author : Pakshal Shashikant Jain
    Date : 04/07/2023
    Program : Accept N numbers from user and return frequency of 11 form it.
              Input : N : 6
                      Elements : 85 66 3 15 93 88
              Output : 0

              Input : N : 6
                      Elements : 85 11 3 15 11 111
              Output : 2
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Freq = /** @class */ (function () {
    function Freq() {
    }
    //Constructor of Class
    Freq.prototype.construct = function () {
        this.isize = 0;
        this.arr = [];
    };
    //Behaviour of Class To Initialize Input
    Freq.prototype.accept = function () {
        this.isize = 6;
        this.arr = [85, 66, 11, 5, 11, 88];
    };
    //Behaviour of Class To Calculate Frequency 
    Freq.prototype.Calculate = function () {
        var i = 0;
        var icnt = 0;
        //Logic 
        for (i = 0; i < this.isize; i++) {
            if (this.arr[i] == 11) {
                icnt = icnt + 1;
            }
        }
        return icnt;
    };
    return Freq;
}());
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Ganapati Bappa Morya");
    //Creating object of Freq Class 
    var fobj = new Freq();
    //Call To Behaviours of Class
    fobj.accept();
    iret = fobj.Calculate();
    //Printing Frequency Calculated
    console.log("Frequency of 11 Number in Entered Number is : %d", iret);
}
//Call To Main Function
main();
