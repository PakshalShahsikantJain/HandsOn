/*
    Author : Pakshal Shashikant Jain
    Date : 26/06/2023
    Program : Accept N numbers from user and return frequency of even numbers.
              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 3
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Frequency = /** @class */ (function () {
    //Constructor of Class
    function Frequency() {
        this.isize = 0;
        this.arr = [];
        this.i = 0;
    }
    //Behaviour of Class To Take Inputs 
    Frequency.prototype.Accept = function () {
        this.isize = 6;
        this.arr = [85, 66, 3, 80, 93, 88];
    };
    //Behaviour of Class To Calculate Frequency
    Frequency.prototype.Count = function () {
        var icnt = 0;
        //Logic To Calculate Frequency 
        for (this.i = 0; this.i < this.isize; this.i++) {
            if (this.arr[this.i] % 2 == 0) {
                icnt = icnt + 1;
            }
        }
        return icnt;
    };
    return Frequency;
}());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh...");
    //Creating object of Frequency
    var fobj = new Frequency();
    //Call To Behaviours of Class
    fobj.Accept();
    iret = fobj.Count();
    //Printing Frequecy Calculated
    console.log("Frequency of Even Number From Entered N Numbers is : %d", iret);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
main();
