#pragma once

#include <memory>
#include <vector>
#include "usine.hpp"

using paquet_t = std::vector<std::unique_ptr<Carte>>;

void remplir (paquet_t, UsineCarte);