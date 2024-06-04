#include "Caminhao.hpp"
#include "Van.hpp"
#include <vector>
#include <memory>

int main() {
    std::vector<std::shared_ptr<Veiculo>> veiculos;

    veiculos.push_back(std::make_shared<Caminhao>("Volvo", "FH16", 20, 4));
    veiculos.push_back(std::make_shared<Van>("Mercedes-Benz", "Sprinter", 2, 12));

    for (const auto& veiculo : veiculos) {
        veiculo->exibirDados();
    }

    return 0;
}
