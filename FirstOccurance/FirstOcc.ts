/*
    Author : Pakshal Shashikant Jain 
    Date : 07/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
                return index of first occurrence of that NO.

    Input : N : 6
            NO: 66
            Elements : 85 66 3 66 93 88
    Output : 1

    Input : N : 6
            NO: 12
            Elements : 85 11 3 15 11 111
    Output : 0 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Occurance  
{
    //Characteristics of Class
    isize : number;
    arr : number[];
    NO : number;

    //Constructor of Class
    construct() 
    {
        this.isize = 0;
        this.arr = [];
        this.NO = 0;
    }

    //Behaviour of Class To Take Input From User
    Accept()
    {
        this.isize = 6;
        this.arr = [85,66,34,12,89,74];
        this.NO = 12;
    }

    //Behaviour of Class To Find First Occurance
    Find()
    {
        var i : number = 0;

        //Logic To Find First Occurace
        for(i = 0;i < this.isize;i++)
        {
            if(this.arr[i] == this.NO)
            {
                break;
            }
        }

        if(this.arr[i] == this.NO)
        {
            return i;
        }
        else 
        {
            return -1;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Creating object of Occurance Class
    var obj = new Occurance();

    //Call To Behaviours of Class
    obj.Accept();
    iret = obj.Find();

    //Printing First Occurance of Entered Number 
    console.log("Number %d is Present at index Number %d",obj.NO,iret);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();