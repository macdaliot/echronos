/*| public_headers |*/

/*| public_types |*/

/*| public_structure_definitions |*/

/*| public_object_like_macros |*/

/*| public_function_like_macros |*/

/*| public_state |*/

/*| public_function_declarations |*/
{{#interrupt_events.length}}
void {{prefix_func}}interrupt_event_raise({{prefix_type}}InterruptEventId event);
{{/interrupt_events.length}}
