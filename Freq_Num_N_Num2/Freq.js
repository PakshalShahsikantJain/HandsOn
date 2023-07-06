/*
    Author : Pakshal Shashikant Jain
    Date : 05/07/2023
    Program : Accept N numbers from user and accept one another number as NO return frequency of NO form it.
              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 2

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : 0
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Frequency = /** @class */ (function () {
    function Frequency() {
    }
    //Constructor of Clas
    Frequency.prototype.construct = function () {
        this.isize = 0;
        this.arr = [];
        this.NO = 0;
    };
    //Behaviour of Class To Take Input From user
    Frequency.prototype.Accept = function () {
        this.isize = 6;
        this.arr = [85, 66, 12, 14, 78, 63];
        this.NO = 11;
    };
    //Behaviour of Class To Count Frequency
    Frequency.prototype.Count = function () {
        var i = 0;
        var icnt = 0;
        for (i = 0; i < this.isize; i++) {
            if (this.arr[i] == this.NO) {
                icnt = icnt + 1;
            }
        }
        return icnt;
    };
    return Frequency;
}());
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of Frequency Class
    var fobj = new Frequency();
    //Call To Behaviours of Class
    fobj.Accept();
    iret = fobj.Count();
    //Counting Frequency Calculated
    console.log("Frequency of Entered Number in Entered N Number is : %d", iret);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
