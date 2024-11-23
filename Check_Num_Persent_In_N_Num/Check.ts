/*
    Author : Pakshal Shashikant Jain 
    Date : 30/06/2023
    Program : Accept N numbers from user check whether that numbers contains 11 in it or not.
              Input : N : 6
                      Elements : 85 66 11 80 93 88
              Output : 11 is present

              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 11 is absent
*/

//Class Declaration
class Check
{
    //Characteristics of Class
    isize : number;
    arr : number[];

    //Constructor of Class
    construct()
    {
        this.isize = 0;
        this.arr = [];
    }   

    //Behaviour of Class To Take Input From user
    Accept() 
    {
        this.isize = 6;
        this.arr = [85,66,3,88,93,12];
    }

    //Behaviour of Class To Check
    Check() : boolean
    {
        var i : number = 0;

        //Logic 
        for(i = 0;i < this.isize;i++)
        {
            if(this.arr[i] == 11) 
            {
                break;
            }
        }

        //Handeling Conditions
        if(this.arr[i] == 11)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

//Main Function
function main() 
{
    var bret : boolean = false;

    console.log("Jay Ganesh....");

    //Creating object of Check Class
    var cobj = new Check()
    
    //Call To Behaviours of Class
    cobj.Accept();
    bret = cobj.Check();

    //Handeling Conditions
    if(bret == true)
    {
        console.log("11 is Present in Entered N Numbers");
    }
    else
    {
        console.log("11 Number is Not Present in Entered N Numbers");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();