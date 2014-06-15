<?php

function db_admin_form()
{
    $form = array();
    $options = array();
    for($cnt = 0; $cnt != 10; ++$cnt)
        $options[] = $cnt + 1;
    
    $form["db_num_of_trails"] = array
    (
        "#type" => "select",
        "#title" => "Enter the number of values to save",
        "#options" => drupal_map_assoc($options),
        "#default_value" => variable_get("db_num_of_trails", 0),
        "#required" => true,
    );
    return system_settings_form($form);
}

























