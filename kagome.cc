#include <iostream>

int main() {
    int Nx = 4;
    int Ny = 2;
    int N = Nx * Ny * 6;
    
    int siteNum[Nx][Ny][6];
    int sites[N][3];
    
    
    
    int bNum = 0;
    int C = 0;
    
    for (int i = 0; i < Nx; i++){
        for (int j = 0; j < Ny; j++){
            for (int k = 0; k < 6; k++){
                
                siteNum[i][j][k] = C;
                sites[C][0] = i;
                sites[C][1] = j;
                sites[C][2] = k;
                C++;
                
            }
        }
    }
    
    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            if (sites[i][0] == sites[j][0] && sites[i][1] == sites[j][1]){
                if (sites[j][2] == sites [i][2] + 2 || sites[j][2] == sites [i][2] + 4){
                    //print(i, j, "A")
                    std::cout << "\n" << i << " " << j;// << "A";
                }
                else if ((sites[i][2] == 3 && sites[j][2] == 4)){
                    //print(i,j, "B")
                    std::cout << "\n" << i << " " << j;
                }
            }
            if (sites[i][0] == sites[j][0] && sites[j][1] == sites[i][1]+1){
                if (sites[i][2] == 1 && (sites[j][2] == sites [i][2] + 2 || sites[j][2] == sites [i][2] + 3)){
                    //print(i,j, "C")
                    std::cout << "\n" << i << " " << j; // << "C";
                }
                else if (sites[i][2] == 0 && sites[j][2] == 2){
                    //print(i,j, "D")
                    std::cout << "\n" << i << " " << j;
                }
            }
            if (sites[i][1] == 0 && sites[j][1] == Ny - 1 && sites[i][0] == sites[j][0]){
                
                if (sites[i][2] == 2 && sites[j][2] == 0){
                    //print(i,j, "E")
                    std::cout << "\n" << i << " " << j;
                }
                else if ((sites[i][2] == 3 || sites[i][2] == 4) && ( sites[j][2] == 1 )){
                    //print(i,j, "F")
                    std::cout << "\n" << i << " " << j;
                }
            }
                
            else if (sites[j][1] == sites[i][1] && sites[j][0] == sites[i][0]+1 && sites[i][2] == 2 && sites[j][2] == 5){
                //print(i,j, "G")
                std::cout << "\n" << i << " " << j;
            }
            else if (sites[j][0] == sites[i][0]+1 && sites[j][1] == sites[i][1]+1 && sites[i][2] == 0 && sites[j][2] == 5){
                //print(i,j, "H")
                std::cout << "\n" << i << " " << j;
            }
            else if (sites[i][1] == Ny - 1 && sites[j][1] == 0 && sites[j][0] == sites[i][0] + 1 && sites[i][2] == 0 && sites[j][2] == 5){
                //print(i, j, "I")
                std::cout << "\n" << i << " " << j;
            }
            
                            
                            
                            
            /*
            if (sites[j][0]==sites[i][0]+1 && sites[i][2]==0 && sites[j][2]==2 && sites[i][1]==sites[j][1]){
                
                latt.emplace_back(i+1,j+1, "1");
                bNum++;
                
            }
            
            else if (sites[j][1]==sites[i][1]+1 && sites[i][2]==1 && sites[j][2]==3 && sites[i][0]==sites[j][0]){
                
                latt.emplace_back(i+1,j+1,"1");
                bNum++;
                 
            }
            //sites[i, 1]==m-1 and sites[j, 1]==0 and sites[i, 2]==1 and sites[j, 2]==3 and sites[i, 0]==sites[j,0]:
            else if (sites[i][1]==Ny-1 && sites[j][1]==0 && sites[i][2]==1 && sites[j][2]==3 && sites[i][0]==sites[j][0]){
                
                latt.emplace_back(i+1,j+1,"1");
                bNum++;
                
            }
            
            else if (sites[i][0]==sites[j][0] && sites[i][1]==sites[j][1] && sites[j][2]==sites[i][2]+1){
                
                latt.emplace_back(i+1,j+1, "0");
                bNum++;
                
            }
            
            else if (sites[i][0]==sites[j][0] && sites[i][1]==sites[j][1] && sites[i][2]-sites[j][2]==3){
             
                latt.emplace_back(i+1,j+1, "0");
                bNum++;
                
            }
        */
             
             
        }
    }
    
    
    

    
    return 0;
}
