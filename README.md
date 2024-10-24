```
   _ (`-.               .-')    ('-. .-.        .-')     (`\ .-') /`  ('-.      _ (`-.  
  ( (OO  )             ( OO ). ( OO )  /       ( OO ).    `.( OO ),' ( OO ).-. ( (OO  ) 
 _.`     \,--. ,--.   (_)---\_),--. ,--.      (_)---\_),--./  .--.   / . --. /_.`     \ 
(__...--''|  | |  |   /    _ | |  | |  |      /    _ | |      |  |   | \-.  \(__...--'' 
 |  /  | ||  | | .-') \  :` `. |   .|  |      \  :` `. |  |   |  |,.-'-'  |  ||  /  | | 
 |  |_.' ||  |_|( OO ) '..`''.)|       |       '..`''.)|  |.'.|  |_)\| |_.'  ||  |_.' | 
 |  .___.'|  | | `-' /.-._)   \|  .-.  |      .-._)   \|         |   |  .-.  ||  .___.' 
 |  |    ('  '-'(_.-' \       /|  | |  |      \       /|   ,'.   |   |  | |  ||  |      
 `--'      `-----'     `-----' `--' `--'       `-----' '--'   '--'   `--' `--'`--'     
```

# 🌀 Push_swap 

El proyecto Push_swap es un desafío de 42 en el que debes ordenar una pila de números utilizando un conjunto limitado de operaciones. Tu objetivo es desarrollar un algoritmo eficiente que logre esto en el menor número de movimientos posibles.

## 🚀 Requisitos
- Lenguaje: C
- Normas: Alineado con las normativas de la Norminette de 42 (sin variables globales, buenas prácticas de código).
- Librerías permitidas: La estándar de libc y desarrolladas por mi: libft, get_next_line y ft_printf.
- Entorno: Desarrollado y probado en Ubuntu.


# 📊 Algoritmo
Mi proyecto utiliza el algoritmo Quick Sort (o el que hayas implementado). A continuación, se presenta una breve descripción de cómo funciona:

- **Quick Sort**: Utilizo la estrategia de "divide y vencerás" para dividir la lista en sublistas más pequeñas, ordenarlas, y luego combinarlas.
Se optimizó el algoritmo para listas pequeñas (3, 4 y 5 elementos) y listas más grandes, buscando siempre el menor número de movimientos.

## 📋 Clone the repository:
```bash
git clone git@github.com:Ja1m3st/push_swap.git
cd push_swap
```
Para poder ejecutarlo tendrás que compilarlo con ```make```

## ⚙️ Para ejecutar el programa:
```bash
./push_swap <Numeros aleatorios>
```

![Push_Swap](https://github.com/user-attachments/assets/c6169125-d85e-40af-9177-377dd1ede8e7)

## 🛠️ Mi checker del bonus:

Si quieres usar mi checker tendras que hacer ```make bonus``` de esta manera ya podras utilizarlo, tambien podras utilizar el checker_linux.
Después de escribir checker y el stack de números, tendrás que escribir los movimientos necesarios para ordenarlos y el checker te dirá si esta ordenado o no.

```bash
./checker <Numeros Aleatorios>
```

![Push_swap_bonus](https://github.com/user-attachments/assets/24c765a4-9ba2-418e-a03d-511c666a3296)

**Intra 42:** ```jaimesan``` 
- ![Versión](https://img.shields.io/badge/Versión-1.0-brightgreen)
- ![Build](https://img.shields.io/badge/Build-Passing-blue)
- ![Estado](https://img.shields.io/badge/Estado-%20Terminado-yellow)
