#include <stdio.h>
#include <ctype.h>

int main()
{
	char resposta;
	printf("\t- - - - Akinator  de  animais - - - -\n");
	printf("O animal � mam�fero?(S/N)\n");
	scanf(" %c", &resposta);
	resposta = toupper(resposta);
	
	if(resposta == 'S'){
	    printf("O animal � quadr�pede?(S/N)\n");
	    scanf(" %c", &resposta);
	    resposta = toupper(resposta);
	    
	    if(resposta == 'S'){
	        printf("O animal � carnivoro?(S/N)\n");
	        scanf(" %c", &resposta);
	        resposta = toupper(resposta);
	        
	        if(resposta == 'S'){
	            printf("O animal � um le�o!!");
	        }
	        else if(resposta == 'N'){
	            printf("O animal � herbivoro?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal � um cavalo!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal n�o est� cadastrado!!");
	            }
	        }
	        
	    }
	    else if(resposta == 'N'){
	        printf("O animal � bipede?(S/N)\n");
	        scanf(" %c", &resposta);
	        resposta = toupper(resposta);
	        if(resposta == 'S'){
	            printf("O animal � onivoro?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal � o homem!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal � frutifero?(S/N)\n");
	                scanf(" %c", &resposta);
	                resposta = toupper(resposta);
	                
	                if(resposta == 'S'){
	                    printf("O animal � o macaco!!");
	                }
	                else if(resposta == 'N'){
	                    printf("O animal n�o est� cadastrado!!");
	                }
	            }
	        }
	        else if(resposta == 'N'){
	            printf("O animal � voador?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal � o morcego!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal � aquatico?(S/N)\n");
	                scanf(" %c", &resposta);
	                resposta = toupper(resposta);
	                if(resposta == 'S'){
	                    printf("O animal � uma baleia!!");
	                }
	                else if(resposta == 'N'){
	                    printf("O animal n�o est� cadastrado!!");
	                }
	            }
	        }
	    }
	}
	else if(resposta == 'N'){
	    printf("O animal � uma ave?(S/N)\n");
	    scanf(" %c", &resposta);
	    resposta = toupper(resposta);
	    
	    if(resposta == 'S'){
	        printf("O animal � n�o-voador?(S/N)\n");
	        scanf(" %c", &resposta);
	        resposta = toupper(resposta);
	        
	        if(resposta == 'S'){
	            printf("O animal � tropical?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal � o avestruz!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal � polar?(S/N)\n");
	                scanf(" %c", &resposta);
	                resposta = toupper(resposta);
	                
	                if(resposta == 'S'){
	                    printf("O animal � o pinguim!!");
	                }
	                else if(resposta == 'N'){
	                    printf("O animal n�o est� cadastrado!!");
	                }
	            }
	        }
	        else if(resposta == 'N'){
	            printf("O animal � nadador?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal � um pato!!");
	            }
	            else if(resposta == 'N'){
	                printf("O animal � uma rapina?(S/N)\n");
	                scanf(" %c", &resposta);
	                resposta = toupper(resposta);
	                
	                if(resposta == 'S'){
	                    printf("O animal � uma aguia!!");
	                }
	                else if(resposta == 'N'){
	                    printf("O animal n�o est� cadastrado!!");
	                }
	            }
	        }
	    }
	    else if(resposta == 'N'){
	        printf("O animal � um reptil?(S/N)\n");
	        scanf(" %c", &resposta);
	        resposta = toupper(resposta);
	        
	        if(resposta == 'S'){
	            printf("O animal tem casco?(S/N)\n");
	            scanf(" %c", &resposta);
	            resposta = toupper(resposta);
	            
	            if(resposta == 'S'){
	                printf("O animal � uma tartaruga!!");
	            }
	            else if(resposta == 'N'){
    	            printf("O animal � carnivoro?(S/N)\n");
    	            scanf(" %c", &resposta);
    	            resposta = toupper(resposta);
    	            
    	            if(resposta == 'S'){
    	                printf("O animal � um crocodilo!!");
    	            }
    	            else if(resposta == 'N'){
    	                printf("O animal possui patas?(S/N)\n");
    	                scanf(" %c", &resposta);
    	                resposta = toupper(resposta);
    	                if(resposta == 'S'){
    	                    printf("O animal � uma cobra!!");
    	                }
    	                else if(resposta == 'N'){
    	                    printf("O animal n�o est� cadastrado!!");
    	                }
    	            }
	            }
	        }
	        else if(resposta == 'N'){
	            printf("O animal n�o est� cadastrado!!");
	        }
	    }
	}
	
	return 0;
}
