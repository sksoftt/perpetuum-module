<?php

function trails_make_admin_menu_form()
{
    $form = array();
    $form["trails_admin_menu"] = array
    (
        "#type" => "select",
        "#title" => "Enter the max number of the history rows",
        "#options" => drupal_map_assoc(array(range(1, 5))),
        "#default_value" => variable_get("trails_admin_menu", ""),
        "#requiried" => true
    );
    
    return system_settings_form($form);
}
?>