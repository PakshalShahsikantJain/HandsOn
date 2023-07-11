/*
    Author : Pakshal Shashikant Jain 
    Date : 11/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              return index of last occurrence of that NO.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 3

              Input : N : 6
                      NO: 93
                      Elements : 85 66 3 66 93 88
              Output : 4
            
              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : -1 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Occurance
{
    //Characteristics of Class
    NO : number;
    arr : number[];
    isize : number;
    
    //Constructor of Class
    construct()
    {
        this.NO = 0;
        this.arr = [];
        this.isize = 0;
    }

    //Behaviour of Class to initialize value to Class Variables
    Accept()
    {
        this.isize = 6;
        this.arr = [85,66,12,12,23,88];
        this.NO = 65;
    }

    //Behaviour of Class To find Last Occurance of Entered number
    Find()
    {
        var i : number = 0;

        //Logic To find Last Occurance
        for(i = this.isize-1;i > 0;i--)
        {
            if(this.arr[i] == this.NO)
            {
                break;
            }
        }

        //Handeling Conditions
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var iret : number = 0;

    console.log("Ganpati Bappa ")

    //Creating object of Occurance Class
    var obj = new Occurance();

    //Call To Behaviour of Class
    obj.Accept();
    iret = obj.Find();

    //Priting Last Occurance of Entered Number Found...
    console.log("Last Occurance of %d number is at index number %d",obj.NO,iret);
}   

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();