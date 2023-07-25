//
// Copyright 2021 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////
// This file is generated by a script.  Do not edit directly.  Edit the
// schema.template.cpp file to make changes.

#include "pxr/imaging/hd/geomSubsetSchema.h"
#include "pxr/imaging/hd/retainedDataSource.h"

#include "pxr/base/trace/trace.h"


PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdGeomSubsetSchemaTokens,
    HDGEOMSUBSET_SCHEMA_TOKENS);



HdTokenDataSourceHandle
HdGeomSubsetSchema::GetType()
{
    return _GetTypedDataSource<HdTokenDataSource>(
        HdGeomSubsetSchemaTokens->type);
}

HdIntArrayDataSourceHandle
HdGeomSubsetSchema::GetIndices()
{
    return _GetTypedDataSource<HdIntArrayDataSource>(
        HdGeomSubsetSchemaTokens->indices);
}

/*static*/
HdContainerDataSourceHandle
HdGeomSubsetSchema::BuildRetained(
        const HdTokenDataSourceHandle &type,
        const HdIntArrayDataSourceHandle &indices
)
{
    TfToken names[2];
    HdDataSourceBaseHandle values[2];

    size_t count = 0;
    if (type) {
        names[count] = HdGeomSubsetSchemaTokens->type;
        values[count++] = type;
    }

    if (indices) {
        names[count] = HdGeomSubsetSchemaTokens->indices;
        values[count++] = indices;
    }

    return HdRetainedContainerDataSource::New(count, names, values);
}



/*static*/
HdTokenDataSourceHandle
HdGeomSubsetSchema::BuildTypeDataSource(
    const TfToken &type)
{
    if (type == HdGeomSubsetSchemaTokens->typeFaceSet) {
        static const HdRetainedTypedSampledDataSource<TfToken>::Handle ds =
            HdRetainedTypedSampledDataSource<TfToken>::New(type);
        return ds;
    }
    if (type == HdGeomSubsetSchemaTokens->typePointSet) {
        static const HdRetainedTypedSampledDataSource<TfToken>::Handle ds =
            HdRetainedTypedSampledDataSource<TfToken>::New(type);
        return ds;
    }
    if (type == HdGeomSubsetSchemaTokens->typeCurveSet) {
        static const HdRetainedTypedSampledDataSource<TfToken>::Handle ds =
            HdRetainedTypedSampledDataSource<TfToken>::New(type);
        return ds;
    }

    // fallback for unknown token
    return HdRetainedTypedSampledDataSource<TfToken>::New(type);
}

HdGeomSubsetSchema::Builder &
HdGeomSubsetSchema::Builder::SetType(
    const HdTokenDataSourceHandle &type)
{
    _type = type;
    return *this;
}

HdGeomSubsetSchema::Builder &
HdGeomSubsetSchema::Builder::SetIndices(
    const HdIntArrayDataSourceHandle &indices)
{
    _indices = indices;
    return *this;
}

HdContainerDataSourceHandle
HdGeomSubsetSchema::Builder::Build()
{
    return HdGeomSubsetSchema::BuildRetained(
        _type,
        _indices
    );
}


PXR_NAMESPACE_CLOSE_SCOPE