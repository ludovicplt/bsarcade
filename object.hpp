//
// EPITECH PROJECT, 2022
// bs arcade
// File description:
//
//

#pragma once

    #include <string>
    #include <iostream>

    class Iobject
    {
        public:
            virtual ~Iobject() = default;
            virtual int do_smth() = 0;
    };

    class object : virtual public Iobject
    {
        public:
            object();
            ~object() override;
            int do_smth() override;
    };
