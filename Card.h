//
// Created by XS on 8/11/2021.
//

#ifndef OBJETO_CARD_H
#define OBJETO_CARD_H
#include <string>
#include <ostream>

class Card {

public:

    Card(const std::string &id, const std::string &description, short value, const std::string &figure, const std::string &color) : id(id),
                                                                                                          description(description),
                                                                                                          value(value), figure(figure), color(color) {}

    const std::string &getId() const {
        return id;
    }

    void setId(const std::string &id) {
        Card::id = id;
    }

    const std::string &getDescription() const {
        return description;
    }

    void setDescription(const std::string &description) {
        Card::description = description;
    }

    short getValue() const {
        return value;
    }

    void setValue(short value) {
        Card::value = value;
    }

    const std::string &getFigure() const {
        return figure;
    }

    void setFigure(const std::string &figure) {
        Card::figure = figure;
    }

    const std::string &getColor() const {
        return color;
    }

    void setColor(const std::string &color) {
        Card::color = color;
    }

    friend std::ostream &operator<<(std::ostream &os, const Card &card) {
        os << "id: " << card.id << " description: " << card.description << " value: " << card.value << " figure: "
           << card.figure;
        return os;
    }

    virtual ~Card() {

    }

private:

    std::string id;
    std::string description;
    short int value;
    std::string figure;
    std::string color;

};

#endif //OBJETO_CARD_H
