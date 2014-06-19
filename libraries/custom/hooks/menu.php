<?php

//this class will build a menu for drupal module
class menu
{
    private $menu;
    
    public $path;
    public $title;
    public $description;
    public $title_callback;
    public $title_arguments;
    
    public $page_callback;
    public $page_arguments;
    public $access_aruments;
    public $access_callback;
     
     public $file;
     public $file_path;

     
     public function menu()
    {
        $this->menu = array();
        
        $this->path = false;
        $this->title = false;
        $this->description = false;
        $this->title_arguments = false;
        $this->title_callback = false;
        
        $this->page_callback = false;
        $this->page_arguments = false;
        $this->access_aruments = false;
        $this->access_callback = false;

        $this->file = false;
        $this->file_path = false;
    }
    
    public function make_menu($check = false)
    {
        
        if(!$this->path)
            return false;;
        
        if($this->title)
            $menu[$cnt][$this->path]["title"] = $this->title;
        
    }
}


































?>