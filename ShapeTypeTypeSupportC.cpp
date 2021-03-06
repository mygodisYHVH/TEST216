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
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:366


#include "ShapeTypeTypeSupportC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "ShapeTypeTypeSupportC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\alias_typecode.cpp:49



// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\typecode_defn.cpp:461


#ifndef _TAO_TYPECODE_org_omg_dds_demo_ShapeTypeSeq_GUARD
#define _TAO_TYPECODE_org_omg_dds_demo_ShapeTypeSeq_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        org_omg_dds_demo_ShapeTypeSeq_0 (
          ::CORBA::tk_sequence,
          &org::omg::dds::demo::_tc_ShapeType,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_org_omg_dds_demo_ShapeTypeSeq_0 =
        &org_omg_dds_demo_ShapeTypeSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_org_omg_dds_demo_ShapeTypeSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_org_omg_dds_demo_ShapeTypeSeq (
    ::CORBA::tk_alias,
    "IDL:org/omg/dds/demo/ShapeTypeSeq:1.0",
    "ShapeTypeSeq",
    &TAO::TypeCode::tc_org_omg_dds_demo_ShapeTypeSeq_0);
  

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
        ::CORBA::TypeCode_ptr const _tc_ShapeTypeSeq =
          &_tao_tc_org_omg_dds_demo_ShapeTypeSeq;
      }
    }
  }
}

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for org::omg::dds::demo::ShapeTypeTypeSupport.

org::omg::dds::demo::ShapeTypeTypeSupport_ptr
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeTypeSupport>::duplicate (
    org::omg::dds::demo::ShapeTypeTypeSupport_ptr p)
{
  return org::omg::dds::demo::ShapeTypeTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeTypeSupport>::release (
    org::omg::dds::demo::ShapeTypeTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

org::omg::dds::demo::ShapeTypeTypeSupport_ptr
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeTypeSupport>::nil (void)
{
  return org::omg::dds::demo::ShapeTypeTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeTypeSupport>::marshal (
    const org::omg::dds::demo::ShapeTypeTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



org::omg::dds::demo::ShapeTypeTypeSupport::ShapeTypeTypeSupport (void)
{}

org::omg::dds::demo::ShapeTypeTypeSupport::~ShapeTypeTypeSupport (void)
{
}

void
org::omg::dds::demo::ShapeTypeTypeSupport::_tao_any_destructor (void *_tao_void_pointer)
{
  ShapeTypeTypeSupport *_tao_tmp_pointer =
    static_cast<ShapeTypeTypeSupport *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

org::omg::dds::demo::ShapeTypeTypeSupport_ptr
org::omg::dds::demo::ShapeTypeTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ShapeTypeTypeSupport::_duplicate (
      dynamic_cast<ShapeTypeTypeSupport_ptr> (_tao_objref));
}

org::omg::dds::demo::ShapeTypeTypeSupport_ptr
org::omg::dds::demo::ShapeTypeTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ShapeTypeTypeSupport::_duplicate (
      dynamic_cast<ShapeTypeTypeSupport_ptr> (_tao_objref));
}

org::omg::dds::demo::ShapeTypeTypeSupport_ptr
org::omg::dds::demo::ShapeTypeTypeSupport::_nil (void)
{
  return 0;
}

org::omg::dds::demo::ShapeTypeTypeSupport_ptr
org::omg::dds::demo::ShapeTypeTypeSupport::_duplicate (ShapeTypeTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
org::omg::dds::demo::ShapeTypeTypeSupport::_tao_release (ShapeTypeTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
org::omg::dds::demo::ShapeTypeTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:org/omg/dds/demo/ShapeTypeTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* org::omg::dds::demo::ShapeTypeTypeSupport::_interface_repository_id (void) const
{
  return "IDL:org/omg/dds/demo/ShapeTypeTypeSupport:1.0";
}

::CORBA::Boolean
org::omg::dds::demo::ShapeTypeTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_org_omg_dds_demo_ShapeTypeTypeSupport (
    ::CORBA::tk_local_interface,
    "IDL:org/omg/dds/demo/ShapeTypeTypeSupport:1.0",
    "ShapeTypeTypeSupport");
  

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
        ::CORBA::TypeCode_ptr const _tc_ShapeTypeTypeSupport =
          &_tao_tc_org_omg_dds_demo_ShapeTypeTypeSupport;
      }
    }
  }
}

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for org::omg::dds::demo::ShapeTypeDataWriter.

org::omg::dds::demo::ShapeTypeDataWriter_ptr
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeDataWriter>::duplicate (
    org::omg::dds::demo::ShapeTypeDataWriter_ptr p)
{
  return org::omg::dds::demo::ShapeTypeDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeDataWriter>::release (
    org::omg::dds::demo::ShapeTypeDataWriter_ptr p)
{
  ::CORBA::release (p);
}

org::omg::dds::demo::ShapeTypeDataWriter_ptr
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeDataWriter>::nil (void)
{
  return org::omg::dds::demo::ShapeTypeDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeDataWriter>::marshal (
    const org::omg::dds::demo::ShapeTypeDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



org::omg::dds::demo::ShapeTypeDataWriter::ShapeTypeDataWriter (void)
{}

org::omg::dds::demo::ShapeTypeDataWriter::~ShapeTypeDataWriter (void)
{
}

void
org::omg::dds::demo::ShapeTypeDataWriter::_tao_any_destructor (void *_tao_void_pointer)
{
  ShapeTypeDataWriter *_tao_tmp_pointer =
    static_cast<ShapeTypeDataWriter *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

org::omg::dds::demo::ShapeTypeDataWriter_ptr
org::omg::dds::demo::ShapeTypeDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ShapeTypeDataWriter::_duplicate (
      dynamic_cast<ShapeTypeDataWriter_ptr> (_tao_objref));
}

org::omg::dds::demo::ShapeTypeDataWriter_ptr
org::omg::dds::demo::ShapeTypeDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ShapeTypeDataWriter::_duplicate (
      dynamic_cast<ShapeTypeDataWriter_ptr> (_tao_objref));
}

org::omg::dds::demo::ShapeTypeDataWriter_ptr
org::omg::dds::demo::ShapeTypeDataWriter::_nil (void)
{
  return 0;
}

org::omg::dds::demo::ShapeTypeDataWriter_ptr
org::omg::dds::demo::ShapeTypeDataWriter::_duplicate (ShapeTypeDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
org::omg::dds::demo::ShapeTypeDataWriter::_tao_release (ShapeTypeDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
org::omg::dds::demo::ShapeTypeDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:org/omg/dds/demo/ShapeTypeDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* org::omg::dds::demo::ShapeTypeDataWriter::_interface_repository_id (void) const
{
  return "IDL:org/omg/dds/demo/ShapeTypeDataWriter:1.0";
}

::CORBA::Boolean
org::omg::dds::demo::ShapeTypeDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_org_omg_dds_demo_ShapeTypeDataWriter (
    ::CORBA::tk_local_interface,
    "IDL:org/omg/dds/demo/ShapeTypeDataWriter:1.0",
    "ShapeTypeDataWriter");
  

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
        ::CORBA::TypeCode_ptr const _tc_ShapeTypeDataWriter =
          &_tao_tc_org_omg_dds_demo_ShapeTypeDataWriter;
      }
    }
  }
}

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\interface_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for org::omg::dds::demo::ShapeTypeDataReader.

org::omg::dds::demo::ShapeTypeDataReader_ptr
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeDataReader>::duplicate (
    org::omg::dds::demo::ShapeTypeDataReader_ptr p)
{
  return org::omg::dds::demo::ShapeTypeDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeDataReader>::release (
    org::omg::dds::demo::ShapeTypeDataReader_ptr p)
{
  ::CORBA::release (p);
}

org::omg::dds::demo::ShapeTypeDataReader_ptr
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeDataReader>::nil (void)
{
  return org::omg::dds::demo::ShapeTypeDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<org::omg::dds::demo::ShapeTypeDataReader>::marshal (
    const org::omg::dds::demo::ShapeTypeDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



org::omg::dds::demo::ShapeTypeDataReader::ShapeTypeDataReader (void)
{}

org::omg::dds::demo::ShapeTypeDataReader::~ShapeTypeDataReader (void)
{
}

void
org::omg::dds::demo::ShapeTypeDataReader::_tao_any_destructor (void *_tao_void_pointer)
{
  ShapeTypeDataReader *_tao_tmp_pointer =
    static_cast<ShapeTypeDataReader *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

org::omg::dds::demo::ShapeTypeDataReader_ptr
org::omg::dds::demo::ShapeTypeDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ShapeTypeDataReader::_duplicate (
      dynamic_cast<ShapeTypeDataReader_ptr> (_tao_objref));
}

org::omg::dds::demo::ShapeTypeDataReader_ptr
org::omg::dds::demo::ShapeTypeDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ShapeTypeDataReader::_duplicate (
      dynamic_cast<ShapeTypeDataReader_ptr> (_tao_objref));
}

org::omg::dds::demo::ShapeTypeDataReader_ptr
org::omg::dds::demo::ShapeTypeDataReader::_nil (void)
{
  return 0;
}

org::omg::dds::demo::ShapeTypeDataReader_ptr
org::omg::dds::demo::ShapeTypeDataReader::_duplicate (ShapeTypeDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
org::omg::dds::demo::ShapeTypeDataReader::_tao_release (ShapeTypeDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
org::omg::dds::demo::ShapeTypeDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:org/omg/dds/demo/ShapeTypeDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* org::omg::dds::demo::ShapeTypeDataReader::_interface_repository_id (void) const
{
  return "IDL:org/omg/dds/demo/ShapeTypeDataReader:1.0";
}

::CORBA::Boolean
org::omg::dds::demo::ShapeTypeDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_org_omg_dds_demo_ShapeTypeDataReader (
    ::CORBA::tk_local_interface,
    "IDL:org/omg/dds/demo/ShapeTypeDataReader:1.0",
    "ShapeTypeDataReader");
  

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
        ::CORBA::TypeCode_ptr const _tc_ShapeTypeDataReader =
          &_tao_tc_org_omg_dds_demo_ShapeTypeDataReader;
      }
    }
  }
}

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeTypeSupport>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeTypeSupport>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeTypeSupport>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
        

        /// Copying insertion.
        void
        operator<<= (
            ::CORBA::Any &_tao_any,
            ShapeTypeTypeSupport_ptr _tao_elem)
        {
          ShapeTypeTypeSupport_ptr _tao_objptr =
            ShapeTypeTypeSupport::_duplicate (_tao_elem);
          _tao_any <<= &_tao_objptr;
        }

        /// Non-copying insertion.
        void
        operator<<= (
            ::CORBA::Any &_tao_any,
            ShapeTypeTypeSupport_ptr *_tao_elem)
        {
          TAO::Any_Impl_T<ShapeTypeTypeSupport>::insert (
              _tao_any,
              ShapeTypeTypeSupport::_tao_any_destructor,
              _tc_ShapeTypeTypeSupport,
              *_tao_elem);
        }

        ::CORBA::Boolean
        operator>>= (
            const ::CORBA::Any &_tao_any,
            ShapeTypeTypeSupport_ptr &_tao_elem)
        {
          return
            TAO::Any_Impl_T<ShapeTypeTypeSupport>::extract (
                _tao_any,
                ShapeTypeTypeSupport::_tao_any_destructor,
                _tc_ShapeTypeTypeSupport,
                _tao_elem);
        }
      }
    }
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeTypeSupport_ptr _tao_elem)
{
  org::omg::dds::demo::ShapeTypeTypeSupport_ptr _tao_objptr =
    org::omg::dds::demo::ShapeTypeTypeSupport::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeTypeSupport_ptr *_tao_elem)
{
  TAO::Any_Impl_T<org::omg::dds::demo::ShapeTypeTypeSupport>::insert (
      _tao_any,
      org::omg::dds::demo::ShapeTypeTypeSupport::_tao_any_destructor,
      org::omg::dds::demo::_tc_ShapeTypeTypeSupport,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeTypeSupport_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<org::omg::dds::demo::ShapeTypeTypeSupport>::extract (
        _tao_any,
        org::omg::dds::demo::ShapeTypeTypeSupport::_tao_any_destructor,
        org::omg::dds::demo::_tc_ShapeTypeTypeSupport,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeDataWriter>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeDataWriter>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeDataWriter>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
        

        /// Copying insertion.
        void
        operator<<= (
            ::CORBA::Any &_tao_any,
            ShapeTypeDataWriter_ptr _tao_elem)
        {
          ShapeTypeDataWriter_ptr _tao_objptr =
            ShapeTypeDataWriter::_duplicate (_tao_elem);
          _tao_any <<= &_tao_objptr;
        }

        /// Non-copying insertion.
        void
        operator<<= (
            ::CORBA::Any &_tao_any,
            ShapeTypeDataWriter_ptr *_tao_elem)
        {
          TAO::Any_Impl_T<ShapeTypeDataWriter>::insert (
              _tao_any,
              ShapeTypeDataWriter::_tao_any_destructor,
              _tc_ShapeTypeDataWriter,
              *_tao_elem);
        }

        ::CORBA::Boolean
        operator>>= (
            const ::CORBA::Any &_tao_any,
            ShapeTypeDataWriter_ptr &_tao_elem)
        {
          return
            TAO::Any_Impl_T<ShapeTypeDataWriter>::extract (
                _tao_any,
                ShapeTypeDataWriter::_tao_any_destructor,
                _tc_ShapeTypeDataWriter,
                _tao_elem);
        }
      }
    }
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeDataWriter_ptr _tao_elem)
{
  org::omg::dds::demo::ShapeTypeDataWriter_ptr _tao_objptr =
    org::omg::dds::demo::ShapeTypeDataWriter::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeDataWriter_ptr *_tao_elem)
{
  TAO::Any_Impl_T<org::omg::dds::demo::ShapeTypeDataWriter>::insert (
      _tao_any,
      org::omg::dds::demo::ShapeTypeDataWriter::_tao_any_destructor,
      org::omg::dds::demo::_tc_ShapeTypeDataWriter,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeDataWriter_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<org::omg::dds::demo::ShapeTypeDataWriter>::extract (
        _tao_any,
        org::omg::dds::demo::ShapeTypeDataWriter::_tao_any_destructor,
        org::omg::dds::demo::_tc_ShapeTypeDataWriter,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// d:\ace+dds\ace_wrappers\tao\tao_idl\be\be_visitor_interface\any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeDataReader>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeDataReader>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<org::omg::dds::demo::ShapeTypeDataReader>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace org
{
  
  namespace omg
  {
    
    namespace dds
    {
      
      namespace demo
      {
        

        /// Copying insertion.
        void
        operator<<= (
            ::CORBA::Any &_tao_any,
            ShapeTypeDataReader_ptr _tao_elem)
        {
          ShapeTypeDataReader_ptr _tao_objptr =
            ShapeTypeDataReader::_duplicate (_tao_elem);
          _tao_any <<= &_tao_objptr;
        }

        /// Non-copying insertion.
        void
        operator<<= (
            ::CORBA::Any &_tao_any,
            ShapeTypeDataReader_ptr *_tao_elem)
        {
          TAO::Any_Impl_T<ShapeTypeDataReader>::insert (
              _tao_any,
              ShapeTypeDataReader::_tao_any_destructor,
              _tc_ShapeTypeDataReader,
              *_tao_elem);
        }

        ::CORBA::Boolean
        operator>>= (
            const ::CORBA::Any &_tao_any,
            ShapeTypeDataReader_ptr &_tao_elem)
        {
          return
            TAO::Any_Impl_T<ShapeTypeDataReader>::extract (
                _tao_any,
                ShapeTypeDataReader::_tao_any_destructor,
                _tc_ShapeTypeDataReader,
                _tao_elem);
        }
      }
    }
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeDataReader_ptr _tao_elem)
{
  org::omg::dds::demo::ShapeTypeDataReader_ptr _tao_objptr =
    org::omg::dds::demo::ShapeTypeDataReader::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeDataReader_ptr *_tao_elem)
{
  TAO::Any_Impl_T<org::omg::dds::demo::ShapeTypeDataReader>::insert (
      _tao_any,
      org::omg::dds::demo::ShapeTypeDataReader::_tao_any_destructor,
      org::omg::dds::demo::_tc_ShapeTypeDataReader,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    org::omg::dds::demo::ShapeTypeDataReader_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<org::omg::dds::demo::ShapeTypeDataReader>::extract (
        _tao_any,
        org::omg::dds::demo::ShapeTypeDataReader::_tao_any_destructor,
        org::omg::dds::demo::_tc_ShapeTypeDataReader,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

