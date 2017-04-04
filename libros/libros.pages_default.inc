<?php
/**
 * @file
 * libros.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function libros_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_19daf0a4-841d-4ca7-9bc8-76195cfca775';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Libros',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'libros' => 'libros',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cf5f173e-1efa-4758-a2cb-e4fc88062846';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_19daf0a4-841d-4ca7-9bc8-76195cfca775';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-940b298e-6c9b-4362-ae30-e742afc9cc53';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_autor_libro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '940b298e-6c9b-4362-ae30-e742afc9cc53';
  $display->content['new-940b298e-6c9b-4362-ae30-e742afc9cc53'] = $pane;
  $display->panels['left'][0] = 'new-940b298e-6c9b-4362-ae30-e742afc9cc53';
  $pane = new stdClass();
  $pane->pid = 'new-1c38649e-ae42-4155-aec7-5bcbdf58f226';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1c38649e-ae42-4155-aec7-5bcbdf58f226';
  $display->content['new-1c38649e-ae42-4155-aec7-5bcbdf58f226'] = $pane;
  $display->panels['right'][0] = 'new-1c38649e-ae42-4155-aec7-5bcbdf58f226';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-940b298e-6c9b-4362-ae30-e742afc9cc53';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_19daf0a4-841d-4ca7-9bc8-76195cfca775'] = $handler;

  return $export;
}
