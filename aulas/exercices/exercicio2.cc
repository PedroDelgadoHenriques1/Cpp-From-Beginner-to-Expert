//Encontrando extremos: implementando funções Min e Max em C++
//Escreva duas funções chamadas minValuee maxValue.

//Ambas as funções devem aceitar dois argumentos: uma matriz de doubles e o tamanho da matriz .

//A minValuefunção deve retornar o menor double na matriz, enquanto a maxValuefunção deve retornar o maior double.

//Suas funções devem ser capazes de manipular um array com pelo menos um elemento.



//Função para encontrar valor minimo em um array de doubles

double minValue(double arr[], int size) {
    double min = arr[0];                        // Inicializa o menor valor com o primeiro elemento do array
        for (int i = 1; i < size; i++) {        // Começa do segundo elemento
            if (arr[i] < min) {                 // Se o elemento atual for menor que o menor valor encontrado
                min = arr[i];                   // Atualiza o menor valor
            }
        }
    return min; 
}

//Função para encontrar valor maximo em um array de doubles
double maxValue(double arr[], int size) {
    double max = arr[0];                        // Inicializa o maior valor com o primeiro elemento do array
        for (int i = 1; i < size; i++) {        // Começa do segundo elemento
            if (arr[i] > max) {                 // Se o elemento atual for maior que o maior valor encontrado
                max = arr[i];                   // Atualiza o maior valor
            }
        }
    return max; 
}