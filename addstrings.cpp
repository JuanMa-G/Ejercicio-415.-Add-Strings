class Solution {
public:
    string addStrings(string num1, string num2) {
        int dig_1 = 0;
        int dig_2 = 0;
        int sum_dig = 0;
        int acarreo = 0;
        int resta = 0;      
        
        string resultado = "";

        int length_1 = num1.length(); 
        int length_2 = num2.length();

        if ( length_1 > length_2 ){
            resta = length_1 - length_2;
            for(int i = 0; i < resta;i++){
                num2.insert(0,"0");
            }
            length_2 = num2.length();
        }
        else if ( length_2 > length_1 ){
            resta = length_2 - length_1;
            for(int i = 0; i < resta;i++){
                num1.insert(0,"0");
            }
            length_1 = num1.length(); 
        }        
        

        for (int i = length_1-1; i >= 0; i--){
            dig_1 = num1[i] - '0';
            dig_2 = num2[i] - '0';
            sum_dig = dig_1 + dig_2 + acarreo;

            if( sum_dig > 9 ){
                acarreo = 1;
                resultado.insert(0,to_string(sum_dig - 10));
                }
            else{
                acarreo = 0;
                resultado.insert(0,to_string(sum_dig));
            }
        }
        return resultado;

    }
};
