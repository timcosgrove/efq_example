<?php
/**
 * @file
 * efq_example.fields.efq_photo.inc
 */
function efq_example_efq_photo_fields() {
  $fields = array();



  // Exported field: 'node-efq_photo-field_image'
  $fields['node-efq_photo-field_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'efq_photo',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-efq_photo-field_us_state'
  $fields['node-efq_photo-field_us_state'] = array(
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
      'bundle' => 'efq_photo',
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
        'weight' => '3',
      ),
    ),
  );


  return $fields;
}
