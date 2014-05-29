<?php
function trails_admin_menu()
{
    $form = array();
    $form["trails_admin_menu"] = array
    (
        "#type" => "select",
        "#title" => "Enter the max number of the history rows",
        "#options" => drupal_map_assoc(array(1, 2, 3, 4, 5)),
        
        // because of system_settigs_form() function every element of the form
        // becaome a variable. So if some value already exists
        //it become a defualt value
        "#default_value" => variable_get("trails_admin_menu", ""),
        "#requiried" => true
    );
    
    return system_settings_form($form);
}
