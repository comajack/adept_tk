<?php

/**
 * @return array
 */
function adept_tk_admin_settings() {
    $form = array();

    // General settings
    $form['adept_tk_all'] = array(
        '#type' => 'fieldset',
        '#title' => t('Base options'),
        '#description' => t('Любое использование Вами программы означает полное и безоговорочное принятие Вами ответственности за результаты использования программы. Данный модуль производит расчёт стоимости доставки транспортными компаниями различных товаров по России. Требует настройки в зависимости от того, как настроен ваш Ubercart.')
    );
    $form['adept_tk_all']['adept_tk_num'] = array(
        '#type' => 'textfield',
        '#title' => t('TK number'),
        '#description' => t('TK number'),
        '#default_value' => variable_get('adept_tk_num', ''),
        '#size' => 70,
    );

    // GTD settings
    $gtd_states = array(
        'invisible' => array(
            ':input[name="adept_tk_gtd_calc"]' => array('checked' => FALSE),
        ),
    );
    $form['adept_tk_gtd_setting'] = array(
        '#type' => 'fieldset',
        '#title' => t('GTD settings'),
    );
    $form['adept_tk_gtd_setting']['adept_tk_gtd_calc'] = array(
        '#type' => 'checkbox',
        '#title' => t('Select if you want calculate shipping costs in GTD (КИТ, Кашалот)'),
        '#default_value' => variable_get('adept_tk_gtd_calc', 0),
    );
    $form['adept_tk_gtd_setting']['adept_tk_gtd_num'] = array(
        '#type' => 'textfield',
        '#title' => t('GTD number'),
        '#description' => t('GTD number'),
        '#default_value' => variable_get('adept_tk_gtd_num', ''),
        '#size' => 70,
        '#states' => $gtd_states,
    );
    $form['adept_tk_gtd_setting']['adept_tk_gtd_url'] = array(
        '#type' => 'textfield',
        '#title' => t('GTD url'),
        '#description' => t('GTD url'),
        '#default_value' => variable_get('adept_tk_gtd_url', 'https://capi.gtdel.com/1.0/order/calculate'),
        '#size' => 70,
        '#states' => $gtd_states,
    );
    $form['adept_tk_gtd_setting']['adept_tk_gtd_cityFrom'] = array(
        '#type' => 'textfield',
        '#title' => t('GTD city from'),
        '#description' => t('GTD city from'),
        '#default_value' => variable_get('adept_tk_gtd_cityFrom', '660000100000'),
        '#size' => 70,
        '#states' => $gtd_states,
    );
    $form['adept_tk_gtd_setting']['adept_tk_gtd_bearer'] = array(
        '#type' => 'textfield',
        '#title' => t('GTD bearer'),
        '#description' => t('GTD bearer'),
        '#default_value' => variable_get('adept_tk_gtd_bearer', ''),
        '#size' => 70,
        '#states' => $gtd_states,
    );

    // Dellin settings
    $dellin_states = array(
        'invisible' => array(
            ':input[name="adept_tk_dellin_calc"]' => array('checked' => FALSE),
        ),
    );
    $form['adept_tk_dellin_setting'] = array(
        '#type' => 'fieldset',
        '#title' => t('Dellin settings'),
    );
    $form['adept_tk_dellin_setting']['adept_tk_dellin_calc'] = array(
        '#type' => 'checkbox',
        '#title' => t('Select if you want calculate shipping costs in DelLin'),
        '#default_value' => variable_get('adept_tk_dellin_calc', 0),
    );
    $form['adept_tk_dellin_setting']['adept_tk_dellin_num'] = array(
        '#type' => 'textfield',
        '#title' => t('DelLin number'),
        '#description' => t('DelLin number'),
        '#default_value' => variable_get('adept_tk_dellin_num', ''),
        '#size' => 70,
        '#states' => $dellin_states,
    );
    $form['adept_tk_dellin_setting']['adept_tk_dellin_url'] = array(
        '#type' => 'textfield',
        '#title' => t('DelLin url'),
        '#description' => t('DelLin url'),
        '#default_value' => variable_get('adept_tk_dellin_url', 'https://api.dellin.ru/v1/public/calculator.json'),
        '#size' => 70,
        '#states' => $dellin_states,
    );
    $form['adept_tk_dellin_setting']['adept_tk_dellin_cityFrom'] = array(
        '#type' => 'textfield',
        '#title' => t('Dellin city from'),
        '#description' => t('Dellin city from'),
        '#default_value' => variable_get('adept_tk_dellin_cityFrom', '6600000100000000000000000'),
        '#size' => 70,
        '#states' => $dellin_states,
    );
    $form['adept_tk_dellin_setting']['adept_tk_dellin_appkey'] = array(
        '#type' => 'textfield',
        '#title' => t('Dellin appkey'),
        '#description' => t('Dellin appkey'),
        '#default_value' => variable_get('adept_tk_dellin_appkey', ''),
        '#size' => 70,
        '#states' => $dellin_states,
    );

    // NRG settings
    $nrg_states = array(
        'invisible' => array(
            ':input[name="adept_tk_nrg_calc"]' => array('checked' => FALSE),
        ),
    );
    $form['adept_tk_nrg_setting'] = array(
        '#type' => 'fieldset',
        '#title' => t('NRG settings'),
    );
    $form['adept_tk_nrg_setting']['adept_tk_nrg_calc'] = array(
        '#type' => 'checkbox',
        '#title' => t('Select if you want calculate shipping costs in NRG'),
        '#default_value' => variable_get('adept_tk_nrg_calc', 0),
    );
    $form['adept_tk_nrg_setting']['adept_tk_nrg_num'] = array(
        '#type' => 'textfield',
        '#title' => t('NRG number'),
        '#description' => t('NRG number'),
        '#default_value' => variable_get('adept_tk_nrg_num', ''),
        '#size' => 70,
        '#states' => $nrg_states,
    );
    $form['adept_tk_nrg_setting']['adept_tk_nrg_url'] = array(
        '#type' => 'textfield',
        '#title' => t('NRG url'),
        '#description' => t('NRG url'),
        '#default_value' => variable_get('adept_tk_nrg_url', 'https://mainapi.nrg-tk.ru/v3/price'),
        '#size' => 70,
        '#states' => $nrg_states,
    );
    $form['adept_tk_nrg_setting']['adept_tk_nrg_cityFrom'] = array(
        '#type' => 'textfield',
        '#title' => t('NRG city from'),
        '#description' => t('NRG city from'),
        '#default_value' => variable_get('adept_tk_nrg_cityFrom', '343'),
        '#size' => 70,
        '#states' => $nrg_states,
    );
    $form['adept_tk_nrg_setting']['adept_tk_nrg_token'] = array(
        '#type' => 'textfield',
        '#title' => t('NRG token'),
        '#description' => t('NRG token'),
        '#default_value' => variable_get('adept_tk_nrg_token', ''),
        '#size' => 70,
        '#states' => $nrg_states,
    );

    // PEC settings
    $pec_states = array(
        'invisible' => array(
            ':input[name="adept_tk_pec_calc"]' => array('checked' => FALSE),
        ),
    );
    $form['adept_tk_pec_setting'] = array(
        '#type' => 'fieldset',
        '#title' => t('PEC settings'),
    );
    $form['adept_tk_pec_setting']['adept_tk_pec_calc'] = array(
        '#type' => 'checkbox',
        '#title' => t('Select if you want calculate shipping costs in PEC'),
        '#default_value' => variable_get('adept_tk_pec_calc', 0),
    );
    $form['adept_tk_pec_setting']['adept_tk_pec_num'] = array(
        '#type' => 'textfield',
        '#title' => t('PEC number'),
        '#description' => t('PEC number'),
        '#default_value' => variable_get('adept_tk_pec_num', ''),
        '#size' => 70,
        '#states' => $pec_states,
    );
    $form['adept_tk_pec_setting']['adept_tk_pec_url'] = array(
        '#type' => 'textfield',
        '#title' => t('PEC url'),
        '#description' => t('PEC url'),
        '#default_value' => variable_get('adept_tk_pec_url', 'http://calc.pecom.ru/bitrix/components/pecom/calc/ajax.php'),
        '#size' => 70,
        '#states' => $pec_states,
    );
    $form['adept_tk_pec_setting']['adept_tk_pec_cityFrom'] = array(
        '#type' => 'textfield',
        '#title' => t('PEC city from'),
        '#description' => t('PEC city from'),
        '#default_value' => variable_get('adept_tk_pec_cityFrom', '-473'),
        '#size' => 70,
        '#states' => $pec_states,
    );

    // CDEK settings
    $cdek_states = array(
        'invisible' => array(
            ':input[name="adept_tk_cdek_calc"]' => array('checked' => FALSE),
        ),
    );
    $form['adept_tk_cdek_setting'] = array(
        '#type' => 'fieldset',
        '#title' => t('CDEK settings'),
    );
    $form['adept_tk_cdek_setting']['adept_tk_cdek_calc'] = array(
        '#type' => 'checkbox',
        '#title' => t('Select if you want calculate shipping costs in CDEK'),
        '#default_value' => variable_get('adept_tk_cdek_calc', 0),
    );
    $form['adept_tk_cdek_setting']['adept_tk_cdek_num'] = array(
        '#type' => 'textfield',
        '#title' => t('CDEK number'),
        '#description' => t('CDEK number'),
        '#default_value' => variable_get('adept_tk_cdek_num', ''),
        '#size' => 70,
        '#states' => $cdek_states,
    );
    $form['adept_tk_cdek_setting']['adept_tk_cdek_url'] = array(
        '#type' => 'textfield',
        '#title' => t('CDEK url'),
        '#description' => t('CDEK url'),
        '#default_value' => variable_get('adept_tk_cdek_url', 'http://api.cdek.ru/calculator/calculate_price_by_json.php'),
        '#size' => 70,
        '#states' => $cdek_states,
    );
    $form['adept_tk_cdek_setting']['adept_tk_cdek_cityFrom'] = array(
        '#type' => 'textfield',
        '#title' => t('CDEK city from'),
        '#description' => t('CDEK city from'),
        '#default_value' => variable_get('adept_tk_cdek_cityFrom', '250'),
        '#size' => 70,
        '#states' => $cdek_states,
    );
    $form['adept_tk_cdek_setting']['adept_tk_cdek_authLogin'] = array(
        '#type' => 'textfield',
        '#title' => t('CDEK auth login'),
        '#description' => t('CDEK auth login'),
        '#default_value' => variable_get('adept_tk_cdek_authLogin', ''),
        '#size' => 70,
        '#states' => $cdek_states,
    );
    $form['adept_tk_cdek_setting']['adept_tk_cdek_authPass'] = array(
        '#type' => 'textfield',
        '#title' => t('CDEK auth pass'),
        '#description' => t('CDEK auth pass'),
        '#default_value' => variable_get('adept_tk_cdek_authPass', ''),
        '#size' => 70,
        '#states' => $cdek_states,
    );
    $form['adept_tk_cdek_setting']['adept_tk_cdek_tariff'] = array(
        '#type' => 'textfield',
        '#title' => t('CDEK tariff'),
        '#description' => t('CDEK tariff'),
        '#default_value' => variable_get('adept_tk_cdek_tariff', '136'),
        '#size' => 70,
        '#states' => $cdek_states,
    );
    return system_settings_form($form);
}