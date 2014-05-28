<?php

//this function will return form for drupal_get_form function
function scaffolding_admin_settings()
{
    //every key is the name of form element
    $form["scaffolding_example_form"] = array
    (
        //type of form element
        "#type" => "textarea",
        
        //lable upont input element
        "#title" => t("title value"),
        "#default_value" => variable_get("scaffolding_example_settions", ""),
        
        //description of the form element
        "#description" => "description of the text area",
        "#required" => true,
    );
    
    return system_settings_form($form);
}

































?>