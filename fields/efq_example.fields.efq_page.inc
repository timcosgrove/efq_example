<?php
/**
 * @file
 * efq_example.fields.efq_page.inc
 */

function efq_example_efq_page_fields() {
  $fields = array();


  // Exported field: 'node-efq_page-body'
  $fields['node-efq_page-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'efq_page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'node-efq_page-field_us_state'
  $fields['node-efq_page-field_us_state'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_us_state',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'AK' => 'ALASKA',
          'AL' => 'ALABAMA',
          'AR' => 'ARKANSAS',
          'AS' => 'AMERICAN SAMOA',
          'AZ' => 'ARIZONA',
          'CA' => 'CALIFORNIA',
          'CO' => 'COLORADO',
          'CT' => 'CONNECTICUT',
          'DC' => 'DISTRICT OF COLUMBIA',
          'DE' => 'DELAWARE',
          'FL' => 'FLORIDA',
          'FM' => 'FEDERATED STATES OF MICRONESIA',
          'GA' => 'GEORGIA',
          'GU' => 'GUAM',
          'HI' => 'HAWAII',
          'IA' => 'IOWA',
          'ID' => 'IDAHO',
          'IL' => 'ILLINOIS',
          'IN' => 'INDIANA',
          'KS' => 'KANSAS',
          'KY' => 'KENTUCKY',
          'LA' => 'LOUISIANA',
          'MA' => 'MASSACHUSETTS',
          'MD' => 'MARYLAND',
          'ME' => 'MAINE',
          'MH' => 'MARSHALL ISLANDS',
          'MI' => 'MICHIGAN',
          'MN' => 'MINNESOTA',
          'MO' => 'MISSOURI',
          'MP' => 'NORTHERN MARIANA ISLANDS',
          'MS' => 'MISSISSIPPI',
          'MT' => 'MONTANA',
          'NC' => 'NORTH CAROLINA',
          'ND' => 'NORTH DAKOTA',
          'NE' => 'NEBRASKA',
          'NH' => 'NEW HAMPSHIRE',
          'NJ' => 'NEW JERSEY',
          'NM' => 'NEW MEXICO',
          'NV' => 'NEVADA',
          'NY' => 'NEW YORK',
          'OH' => 'OHIO',
          'OK' => 'OKLAHOMA',
          'OR' => 'OREGON',
          'PA' => 'PENNSYLVANIA',
          'PR' => 'PUERTO RICO',
          'PW' => 'PALAU',
          'RI' => 'RHODE ISLAND',
          'SC' => 'SOUTH CAROLINA',
          'SD' => 'SOUTH DAKOTA',
          'TN' => 'TENNESSEE',
          'TX' => 'TEXAS',
          'UT' => 'UTAH',
          'VA' => 'VIRGINIA',
          'VI' => 'VIRGIN ISLANDS',
          'VT' => 'VERMONT',
          'WA' => 'WASHINGTON',
          'WI' => 'WISCONSIN',
          'WV' => 'WEST VIRGINIA',
          'WY' => 'WYOMING',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'efq_page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_us_state',
      'label' => 'US State',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '-2',
      ),
    ),
  );


  return $fields;
}
