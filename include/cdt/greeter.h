#pragma once

#include <string>

namespace greeter {

  /**  Language codes to be used with the Greeter class */
  enum class LanguageCode { EN, DE, ES, FR };

  /**
   * @brief A class for saying hello in multiple languages
   */
  class Greeter {
    std::string name;

  public:
    /**
     * @brief Creates a new cdt
     * @param name the name to greet
     */
    explicit Greeter(std::string name);

    /**
     * @brief Creates a localized string containing the greeting
     * @param lang the language to greet in
     * @return a string containing the greeting
     */
    [[nodiscard]] std::string greet(LanguageCode lang = LanguageCode::EN) const;
  };

}  // namespace greeter
