/*
    Author : Pakshal Shashikant Jain
    Date : 26/09/2023
    Program : Write a program which accept string from user and reverse each
              word in place.
              
              Input : "Marvellous Multi OS
              Output : "suollevraM itluM SO" 
*/

//Class Declaration
class StringWordRev
{
    //Characteristics of Class
    str : string;
    arr : any[];

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.arr = [];
    }

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "Pakshal Shashikant Jain";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Reverse Each Word of String
    StrWrdRev()
    {
        var first : number = 0;
        var last : number = 0;
        var i : number = 0;
        var j : number = 0;
        var temp : any = ' ';

        //Logic To Rverse Each Word of String in Place
        while(last != this.arr.length)
        {
            if(this.arr[last] == ' ')
            {
                while((this.arr[last] == ' ')&&(last != this.arr.length))
                {
                    last++;
                }
                last--;
            }
            else
            {
                first = last;
                
                while((this.arr[last] != ' ')&&(last != this.arr.length))
                {
                    last++;
                }
                
                if(this.arr[last] == ' ')
                {
                    last--;
                }
                i = first;
                j = last;

                while(i <= j)
                {   
                    temp = this.arr[i];
                    this.arr[i] = this.arr[j];
                    this.arr[j] = temp;

                    i++;
                    j--;
                }
            }
            last++;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh...");

    //Creating object of StirngWordRev Class
    var sobj = new StringWordRev();

    //Call To Behaviours of Class
    sobj.Accept();
    sobj.StrWrdRev();

    console.log("String After Reversing Word is : "+sobj.arr.join(''));
}

//////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();