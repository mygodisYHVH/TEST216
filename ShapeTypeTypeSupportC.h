// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.5.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:149

#ifndef _TAO_IDL_SHAPETYPETYPESUPPORTC_BGBRSD_H_
#define _TAO_IDL_SHAPETYPETYPESUPPORTC_BGBRSD_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "dds/DCPS/ZeroCopySeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "ShapeTypeC.h"
#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionExtC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsTypeSupportExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 3
#error This file should be regenerated with TAO_IDL
#endif

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

namespace org
{

  // TAO_IDL - Generated from
  // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

  namespace omg
  {

    // TAO_IDL - Generated from
    // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

    namespace dds
    {

      // TAO_IDL - Generated from
      // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:35

      namespace demo
      {

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_sequence\sequence_ch.cpp:99

        typedef ::TAO::DCPS::ZeroCopyDataSeq< org::omg::dds::demo::ShapeType, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> ShapeTypeSeq;
        

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

        extern  ::CORBA::TypeCode_ptr const _tc_ShapeTypeSeq;

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_ORG_OMG_DDS_DEMO_SHAPETYPETYPESUPPORT__VAR_OUT_CH_)
#define _ORG_OMG_DDS_DEMO_SHAPETYPETYPESUPPORT__VAR_OUT_CH_

        class ShapeTypeTypeSupport;
        typedef ShapeTypeTypeSupport *ShapeTypeTypeSupport_ptr;
        typedef TAO_Objref_Var_T<ShapeTypeTypeSupport> ShapeTypeTypeSupport_var;
        typedef TAO_Objref_Out_T<ShapeTypeTypeSupport> ShapeTypeTypeSupport_out;
        

#endif /* end #if !defined */

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

        class  ShapeTypeTypeSupport
          : public virtual ::OpenDDS::DCPS::TypeSupport
        
        {
        public:

          // TAO_IDL - Generated from
          // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

          typedef ShapeTypeTypeSupport_ptr _ptr_type;
          typedef ShapeTypeTypeSupport_var _var_type;
          typedef ShapeTypeTypeSupport_out _out_type;

          static void _tao_any_destructor (void *);

          // The static operations.
          static ShapeTypeTypeSupport_ptr _duplicate (ShapeTypeTypeSupport_ptr obj);

          static void _tao_release (ShapeTypeTypeSupport_ptr obj);

          static ShapeTypeTypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
          static ShapeTypeTypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
          static ShapeTypeTypeSupport_ptr _nil (void);

          // TAO_IDL - Generated from
          // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

          virtual ::CORBA::Boolean _is_a (const char *type_id);
          virtual const char* _interface_repository_id (void) const;
          virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
        
        protected:
          // Abstract or local interface only.
          ShapeTypeTypeSupport (void);

          

          virtual ~ShapeTypeTypeSupport (void);
        
        private:
          // Private and unimplemented for concrete interfaces.
          ShapeTypeTypeSupport (const ShapeTypeTypeSupport &);

          void operator= (const ShapeTypeTypeSupport &);
        };

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

        extern  ::CORBA::TypeCode_ptr const _tc_ShapeTypeTypeSupport;

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_ORG_OMG_DDS_DEMO_SHAPETYPEDATAWRITER__VAR_OUT_CH_)
#define _ORG_OMG_DDS_DEMO_SHAPETYPEDATAWRITER__VAR_OUT_CH_

        class ShapeTypeDataWriter;
        typedef ShapeTypeDataWriter *ShapeTypeDataWriter_ptr;
        typedef TAO_Objref_Var_T<ShapeTypeDataWriter> ShapeTypeDataWriter_var;
        typedef TAO_Objref_Out_T<ShapeTypeDataWriter> ShapeTypeDataWriter_out;
        

#endif /* end #if !defined */

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

        class  ShapeTypeDataWriter
          : public virtual ::DDS::DataWriter
        
        {
        public:

          // TAO_IDL - Generated from
          // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

          typedef ShapeTypeDataWriter_ptr _ptr_type;
          typedef ShapeTypeDataWriter_var _var_type;
          typedef ShapeTypeDataWriter_out _out_type;

          static void _tao_any_destructor (void *);

          // The static operations.
          static ShapeTypeDataWriter_ptr _duplicate (ShapeTypeDataWriter_ptr obj);

          static void _tao_release (ShapeTypeDataWriter_ptr obj);

          static ShapeTypeDataWriter_ptr _narrow (::CORBA::Object_ptr obj);
          static ShapeTypeDataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
          static ShapeTypeDataWriter_ptr _nil (void);

          virtual ::DDS::InstanceHandle_t register_instance (
            const ::org::omg::dds::demo::ShapeType & instance) = 0;

          virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
            const ::org::omg::dds::demo::ShapeType & instance,
            const ::DDS::Time_t & timestamp) = 0;

          virtual ::DDS::ReturnCode_t unregister_instance (
            const ::org::omg::dds::demo::ShapeType & instance,
            ::DDS::InstanceHandle_t handle) = 0;

          virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
            const ::org::omg::dds::demo::ShapeType & instance,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & timestamp) = 0;

          virtual ::DDS::ReturnCode_t write (
            const ::org::omg::dds::demo::ShapeType & instance_data,
            ::DDS::InstanceHandle_t handle) = 0;

          virtual ::DDS::ReturnCode_t write_w_timestamp (
            const ::org::omg::dds::demo::ShapeType & instance_data,
            ::DDS::InstanceHandle_t handle,
            const ::DDS::Time_t & source_timestamp) = 0;

          virtual ::DDS::ReturnCode_t dispose (
            const ::org::omg::dds::demo::ShapeType & instance_data,
            ::DDS::InstanceHandle_t instance_handle) = 0;

          virtual ::DDS::ReturnCode_t dispose_w_timestamp (
            const ::org::omg::dds::demo::ShapeType & instance_data,
            ::DDS::InstanceHandle_t instance_handle,
            const ::DDS::Time_t & source_timestamp) = 0;

          virtual ::DDS::ReturnCode_t get_key_value (
            ::org::omg::dds::demo::ShapeType & key_holder,
            ::DDS::InstanceHandle_t handle) = 0;

          virtual ::DDS::InstanceHandle_t lookup_instance (
            const ::org::omg::dds::demo::ShapeType & instance_data) = 0;

          // TAO_IDL - Generated from
          // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

          virtual ::CORBA::Boolean _is_a (const char *type_id);
          virtual const char* _interface_repository_id (void) const;
          virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
        
        protected:
          // Abstract or local interface only.
          ShapeTypeDataWriter (void);

          

          virtual ~ShapeTypeDataWriter (void);
        
        private:
          // Private and unimplemented for concrete interfaces.
          ShapeTypeDataWriter (const ShapeTypeDataWriter &);

          void operator= (const ShapeTypeDataWriter &);
        };

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

        extern  ::CORBA::TypeCode_ptr const _tc_ShapeTypeDataWriter;

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_interface.cpp:748

#if !defined (_ORG_OMG_DDS_DEMO_SHAPETYPEDATAREADER__VAR_OUT_CH_)
#define _ORG_OMG_DDS_DEMO_SHAPETYPEDATAREADER__VAR_OUT_CH_

        class ShapeTypeDataReader;
        typedef ShapeTypeDataReader *ShapeTypeDataReader_ptr;
        typedef TAO_Objref_Var_T<ShapeTypeDataReader> ShapeTypeDataReader_var;
        typedef TAO_Objref_Out_T<ShapeTypeDataReader> ShapeTypeDataReader_out;
        

#endif /* end #if !defined */

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:40

        class  ShapeTypeDataReader
          : public virtual ::OpenDDS::DCPS::DataReaderEx
        
        {
        public:

          // TAO_IDL - Generated from
          // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_type.cpp:304

          typedef ShapeTypeDataReader_ptr _ptr_type;
          typedef ShapeTypeDataReader_var _var_type;
          typedef ShapeTypeDataReader_out _out_type;

          static void _tao_any_destructor (void *);

          // The static operations.
          static ShapeTypeDataReader_ptr _duplicate (ShapeTypeDataReader_ptr obj);

          static void _tao_release (ShapeTypeDataReader_ptr obj);

          static ShapeTypeDataReader_ptr _narrow (::CORBA::Object_ptr obj);
          static ShapeTypeDataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
          static ShapeTypeDataReader_ptr _nil (void);

          virtual ::DDS::ReturnCode_t read (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::CORBA::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) = 0;

          virtual ::DDS::ReturnCode_t take (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::CORBA::Long max_samples,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) = 0;

          virtual ::DDS::ReturnCode_t read_w_condition (
            ::org::omg::dds::demo::ShapeTypeSeq & data_values,
            ::DDS::SampleInfoSeq & sample_infos,
            ::CORBA::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) = 0;

          virtual ::DDS::ReturnCode_t take_w_condition (
            ::org::omg::dds::demo::ShapeTypeSeq & data_values,
            ::DDS::SampleInfoSeq & sample_infos,
            ::CORBA::Long max_samples,
            ::DDS::ReadCondition_ptr a_condition) = 0;

          virtual ::DDS::ReturnCode_t read_next_sample (
            ::org::omg::dds::demo::ShapeType & received_data,
            ::DDS::SampleInfo & sample_info) = 0;

          virtual ::DDS::ReturnCode_t take_next_sample (
            ::org::omg::dds::demo::ShapeType & received_data,
            ::DDS::SampleInfo & sample_info) = 0;

          virtual ::DDS::ReturnCode_t read_instance (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::CORBA::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) = 0;

          virtual ::DDS::ReturnCode_t take_instance (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::CORBA::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) = 0;

          virtual ::DDS::ReturnCode_t read_instance_w_condition (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & sample_infos,
            ::CORBA::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) = 0;

          virtual ::DDS::ReturnCode_t take_instance_w_condition (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & sample_infos,
            ::CORBA::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::ReadCondition_ptr a_condition) = 0;

          virtual ::DDS::ReturnCode_t read_next_instance (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::CORBA::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) = 0;

          virtual ::DDS::ReturnCode_t take_next_instance (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq,
            ::CORBA::Long max_samples,
            ::DDS::InstanceHandle_t a_handle,
            ::DDS::SampleStateMask sample_states,
            ::DDS::ViewStateMask view_states,
            ::DDS::InstanceStateMask instance_states) = 0;

          virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
            ::org::omg::dds::demo::ShapeTypeSeq & data_values,
            ::DDS::SampleInfoSeq & sample_infos,
            ::CORBA::Long max_samples,
            ::DDS::InstanceHandle_t previous_handle,
            ::DDS::ReadCondition_ptr a_condition) = 0;

          virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
            ::org::omg::dds::demo::ShapeTypeSeq & data_values,
            ::DDS::SampleInfoSeq & sample_infos,
            ::CORBA::Long max_samples,
            ::DDS::InstanceHandle_t previous_handle,
            ::DDS::ReadCondition_ptr a_condition) = 0;

          virtual ::DDS::ReturnCode_t return_loan (
            ::org::omg::dds::demo::ShapeTypeSeq & received_data,
            ::DDS::SampleInfoSeq & info_seq) = 0;

          virtual ::DDS::ReturnCode_t get_key_value (
            ::org::omg::dds::demo::ShapeType & key_holder,
            ::DDS::InstanceHandle_t handle) = 0;

          virtual ::DDS::InstanceHandle_t lookup_instance (
            const ::org::omg::dds::demo::ShapeType & instance_data) = 0;

          // TAO_IDL - Generated from
          // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_ch.cpp:137

          virtual ::CORBA::Boolean _is_a (const char *type_id);
          virtual const char* _interface_repository_id (void) const;
          virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
        
        protected:
          // Abstract or local interface only.
          ShapeTypeDataReader (void);

          

          virtual ~ShapeTypeDataReader (void);
        
        private:
          // Private and unimplemented for concrete interfaces.
          ShapeTypeDataReader (const ShapeTypeDataReader &);

          void operator= (const ShapeTypeDataReader &);
        };

        // TAO_IDL - Generated from
        // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_decl.cpp:34

        extern  ::CORBA::TypeCode_ptr const _tc_ShapeTypeDataReader;
      
      // TAO_IDL - Generated from
      // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64
      
      } // module org::omg::dds::demo
    
    // TAO_IDL - Generated from
    // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64
    
    } // module org::omg::dds
  
  // TAO_IDL - Generated from
  // d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64
  
  } // module org::omg

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_module\module_ch.cpp:64

} // module org

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_ORG_OMG_DDS_DEMO_SHAPETYPETYPESUPPORT__TRAITS_)
#define _ORG_OMG_DDS_DEMO_SHAPETYPETYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::org::omg::dds::demo::ShapeTypeTypeSupport>
  {
    static ::org::omg::dds::demo::ShapeTypeTypeSupport_ptr duplicate (
        ::org::omg::dds::demo::ShapeTypeTypeSupport_ptr p);
    static void release (
        ::org::omg::dds::demo::ShapeTypeTypeSupport_ptr p);
    static ::org::omg::dds::demo::ShapeTypeTypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::org::omg::dds::demo::ShapeTypeTypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_ORG_OMG_DDS_DEMO_SHAPETYPEDATAWRITER__TRAITS_)
#define _ORG_OMG_DDS_DEMO_SHAPETYPEDATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::org::omg::dds::demo::ShapeTypeDataWriter>
  {
    static ::org::omg::dds::demo::ShapeTypeDataWriter_ptr duplicate (
        ::org::omg::dds::demo::ShapeTypeDataWriter_ptr p);
    static void release (
        ::org::omg::dds::demo::ShapeTypeDataWriter_ptr p);
    static ::org::omg::dds::demo::ShapeTypeDataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::org::omg::dds::demo::ShapeTypeDataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_ORG_OMG_DDS_DEMO_SHAPETYPEDATAREADER__TRAITS_)
#define _ORG_OMG_DDS_DEMO_SHAPETYPEDATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::org::omg::dds::demo::ShapeTypeDataReader>
  {
    static ::org::omg::dds::demo::ShapeTypeDataReader_ptr duplicate (
        ::org::omg::dds::demo::ShapeTypeDataReader_ptr p);
    static void release (
        ::org::omg::dds::demo::ShapeTypeDataReader_ptr p);
    static ::org::omg::dds::demo::ShapeTypeDataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::org::omg::dds::demo::ShapeTypeDataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
         void operator<<= ( ::CORBA::Any &, ShapeTypeTypeSupport_ptr); // copying
         void operator<<= ( ::CORBA::Any &, ShapeTypeTypeSupport_ptr *); // non-copying
         ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ShapeTypeTypeSupport_ptr &);
      }
    }
  }
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, org::omg::dds::demo::ShapeTypeTypeSupport_ptr); // copying
 void operator<<= (::CORBA::Any &, org::omg::dds::demo::ShapeTypeTypeSupport_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, org::omg::dds::demo::ShapeTypeTypeSupport_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
         void operator<<= ( ::CORBA::Any &, ShapeTypeDataWriter_ptr); // copying
         void operator<<= ( ::CORBA::Any &, ShapeTypeDataWriter_ptr *); // non-copying
         ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ShapeTypeDataWriter_ptr &);
      }
    }
  }
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, org::omg::dds::demo::ShapeTypeDataWriter_ptr); // copying
 void operator<<= (::CORBA::Any &, org::omg::dds::demo::ShapeTypeDataWriter_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, org::omg::dds::demo::ShapeTypeDataWriter_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
         void operator<<= ( ::CORBA::Any &, ShapeTypeDataReader_ptr); // copying
         void operator<<= ( ::CORBA::Any &, ShapeTypeDataReader_ptr *); // non-copying
         ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ShapeTypeDataReader_ptr &);
      }
    }
  }
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, org::omg::dds::demo::ShapeTypeDataReader_ptr); // copying
 void operator<<= (::CORBA::Any &, org::omg::dds::demo::ShapeTypeDataReader_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, org::omg::dds::demo::ShapeTypeDataReader_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:1686
#if defined (__ACE_INLINE__)
#include "ShapeTypeTypeSupportC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

