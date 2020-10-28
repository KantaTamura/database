#include "action_func.h"

void (* const name_processing[])(Cli *cli) = {
        show_name,
        file_name,
        add_name,
};

void (* const sNumber_processing[])(Cli *cli) = {
        show_sNumber,
        file_sNumber,
        add_sNumber,
};

void (* const aNumber_processing[])(Cli *cli) = {
        show_aNumber,
        file_aNumber,
        add_aNumber,
};

void (* const address_processing[])(Cli *cli) = {
        show_address,
        file_address,
        add_address,
};

void (* const gender_processing[])(Cli *cli) = {
        show_gender,
        file_gender,
        add_gender,
};

void (* const class_processing[])(Cli *cli) = {
        show_class,
        file_class,
        add_class,
};

void (* const age_processing[])(Cli *cli) = {
        show_age,
        file_age,
        add_age,
};

void (* const birth_processing[])(Cli *cli) = {
        show_birth,
        file_birth,
        add_birth,
};

void (* const score_processing[])(Cli *cli) = {
        show_score,
        file_score,
        add_score,
};
