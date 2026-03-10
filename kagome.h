#include "itensor/mps/lattice/latticebond.h"

namespace itensor {

LatticeGraph inline //Algorithm devloped by Brendan Stork and uses a modified ITensor file. Framework ITensor.
kagome(int Nx,
                   int Ny,
                   Args const& args = Args::global())
    {


    
    
        
    auto N = Nx*Ny*6;
    
    LatticeGraph latt;
    
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
                    std::cout << "\n" << i << " " << j;// << "A";
                    latt.emplace_back(i+1,j+1, "0");
                }
                else if ((sites[i][2] == 3 && sites[j][2] == 4)){
                    std::cout << "\n" << i << " " << j;
                    latt.emplace_back(i+1,j+1, "0");
                }
            }
            if (sites[i][0] == sites[j][0] && sites[j][1] == sites[i][1]+1){
                if (sites[i][2] == 1 && (sites[j][2] == sites [i][2] + 2 || sites[j][2] == sites [i][2] + 3)){
                    std::cout << "\n" << i << " " << j; // << "C";
                    latt.emplace_back(i+1,j+1, "0");
                }
                else if (sites[i][2] == 0 && sites[j][2] == 2){
                    std::cout << "\n" << i << " " << j;
                    latt.emplace_back(i+1,j+1, "0");
                }
            }
            if (sites[i][1] == 0 && sites[j][1] == Ny - 1 && sites[i][0] == sites[j][0]){
                if (sites[i][2] == 2 && sites[j][2] == 0){
                    std::cout << "\n" << i << " " << j;
                    latt.emplace_back(i+1,j+1, "0");
                }
                else if ((sites[i][2] == 3 || sites[i][2] == 4) && ( sites[j][2] == 1 )){
                    std::cout << "\n" << i << " " << j;
                    latt.emplace_back(i+1,j+1, "0");
                }
            }
                
            else if (sites[j][1] == sites[i][1] && sites[j][0] == sites[i][0]+1 && sites[i][2] == 2 && sites[j][2] == 5){
                std::cout << "\n" << i << " " << j;
                latt.emplace_back(i+1,j+1, "0");
            }
            else if (sites[j][0] == sites[i][0]+1 && sites[j][1] == sites[i][1]+1 && sites[i][2] == 0 && sites[j][2] == 5){
                std::cout << "\n" << i << " " << j;
                latt.emplace_back(i+1,j+1, "0");
            }
            else if (sites[i][1] == Ny - 1 && sites[j][1] == 0 && sites[j][0] == sites[i][0] + 1 && sites[i][2] == 0 && sites[j][2] == 5){
                std::cout << "\n" << i << " " << j;
                latt.emplace_back(i+1,j+1, "0");
            }
    
            }
        }
    return latt;
    }
}
    
    
    
    
    
    
    
    
    
    
   


