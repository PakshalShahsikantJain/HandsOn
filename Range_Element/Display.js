/*
    Author : Pakshal Shashikant Jain
    Date : 12/07/2023
    Program : Accept N numbers from user and accept Range, Display all elements from
              that range.
              
              Input : N : 6
                      Start: 60
                      End : 90
                      Elements : 85 66 3 76 93 88
              Output : 66 76 88

              Input : N : 6
                      Start: 30
                      End : 50
                      Elements : 85 66 3 76 93 88
              Output :
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var range = /** @class */ (function () {
    function range() {
    }
    //Constructor of Class
    range.prototype.construct = function () {
        this.isize = 0;
        this.arr = [];
        this.start = 0;
        this.end = 0;
    };
    //Behaviour of Class To Take Input From User
    range.prototype.Accept = function () {
        this.isize = 6;
        this.arr = [85, 66, 93, 75, 84, 13];
        this.start = 10;
        this.end = 15;
    };
    //Behaviour of Class To Display Elements Which are In Entered Range
    range.prototype.Display = function () {
        var i = 0;
        var brr = [];
        //Logic
        for (i = 0; i < this.isize; i++) {
            if ((this.arr[i] >= this.start) && (this.arr[i] <= this.end)) {
                brr[i] = this.arr[i];
            }
        }
        return brr;
    };
    return range;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = [];
    var i = 0;
    console.log("Jay Ganesh....");
    //Creating object of Range Class
    var robj = new range();
    //Call To Behaviours of Class
    robj.Accept();
    iret = robj.Display();
    //Printing ELements Which are in Entered Range
    console.log("Printing Elements Which are in Range of %d and %d Number", robj.start, robj.end);
    for (i = 0; i < robj.isize; i++) {
        if (iret[i] != undefined) {
            console.log("%d\t", iret[i]);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
